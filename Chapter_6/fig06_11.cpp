#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice();

int main()
{
   enum Status
   {
      CONTINUE,
      WON,
      LOST      
   };

   int myPoint;
   Status gameStatus;

   srand(time(0));

   int sumOfDice = rollDice();

   switch (sumOfDice)
   {
   case 7:
   case 10:
      gameStatus = WON;
      break;
   case 2:
   case 3:
   case 12:
      gameStatus = LOST;
      break;
   default:
      gameStatus = CONTINUE;
      myPoint = sumOfDice;
      std::cout << " Point is " << myPoint << std::endl;
      break;
   }

   while (gameStatus == CONTINUE)
   {
      sumOfDice = rollDice();

      if (sumOfDice == myPoint)
         gameStatus = WON;
      else if (sumOfDice == 7)
         gameStatus = LOST;
   }

   if (gameStatus == WON)
      std::cout << " Player Wins " << std::endl;
   else
      std::cout << " Player Loses " << std::endl;

   return 0;
}

int rollDice()
{
   int die1 = 1 + rand() % 6;
   int die2 = 1 + rand() % 6;

   int sum = die1 + die2;

   std::cout << " Player rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
   return sum;
}