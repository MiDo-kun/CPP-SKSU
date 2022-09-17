#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

class DeckOfCards {
  private:
   int deck[4][13];

  public:
   DeckOfCards() {
      srand(time(NULL));

      for (int row = 0; row <= 3; row++) {
         for (int column = 0; column <= 12; column++)
            deck[row][column] = 0;
      }
   }

   void shuffle() {
      int row = 0;
      int column = 0;

      for (int card = 1; card <= 52; card++) {
         do {
            row = rand() % 4;
            column = rand() % 13;
         } while (deck[row][column] != 0);

         deck[row][column] = card;
      }
   }

   void deal() {
      static const char *suit[4] = {"Hearts", "Diamons", "Clubs", "Spades"};
      static const char *face[13] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
                                     "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

      for (int card = 1; card <= 52; card++) {
         for (int row = 0; row <= 3; row++) {
            for (int column = 0; column <= 12; column++) {
               if (deck[row][column] == card) {
                  std::cout << std::setw(5) << std::right << face[column]
                            << " of " << std::setw(8) << std::left << suit[row]
                            << (card % 2 == 0 ? '\n' : '\t');
               }
            }
         }
      }
   }
};

int main() {
   DeckOfCards deckofcards;

   deckofcards.shuffle();
   deckofcards.deal();

   return 0;
}