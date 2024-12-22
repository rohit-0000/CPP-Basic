// In previous lecture we were study about 'squence structure'.
// In this lecture will study about 'selection structure'.
// loop structure----> We will study later.

// Use 'if' to specify a block of code to be executed, if a specified condition is true
//  Use 'else' to specify a block of code to be executed, if the same condition is false
//  Use 'else if' to specify a new condition to test, if the first condition is false
//  Use 'switch' to specify many alternative blocks of code to be executed

#include <iostream>
using namespace std;
int main()
{
   // SELECTION CONTROL STRUCTURE : if - else if - else ladder.
   int age;
   cout << "\n\nENTER YOUR AGE : \n";
   cin >> age;
   if ((age < 18) && (age > 0))
   {
      cout << "YOU CAN NOT ENTER TO MY PARTY . \n";
   }

   else if (age == 18)
   {
      cout << "YOU ARE A KID AND YOU WILL GET A KID PASS TO THE PARTY. " << endl;
   }

   else if (age <= 0)
   {
      cout << "YOU ARE NOT YET BORN. ";
   }

   else
   {
      cout << "YOU ARE WELCOME TO MY PARTY. " << endl;
   }

   cout << endl
        << endl;
   // SELECTION CONTROL STRUCTURE : switch case statement.
   int AGE;
   cout << "ENTER YOUR AGE:" << endl;
   cin >> AGE;
   switch (AGE)
   {
   case 18:
      cout << "you are 18." << endl;
      cout << "YOU ARE WELCOME HERE." << endl;
      break; // if break not applied then print all cout.

   case 25:
      cout << "you are 25. " << endl;
      cout << "YOU ARE WELCOME HERE." << endl;
      break;

   case 45:
      cout << "you are 45 ." << endl;
      cout << "YOU ARE WELCOME HERE." << endl;
      break;

   default:
      cout << "NO SPECIAL CASE.";
      break;
   }
   cout << "\n\nTHANKS FOR TESTING." << endl;
   return 0;
}