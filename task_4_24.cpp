#include <iostream>
using namespace std;

int main() {
   int inputVal;
   int numDollars;
   int numQuarters;
   int numDimes;
   int numNickels;
   int numPennies;
   
   cin >> inputVal;
   
   if (inputVal <= 0) {
      cout << "No change" << endl;
   } // Could return at this point
   
   numDollars = inputVal / 100;
   inputVal -= numDollars * 100;
   
   numQuarters = inputVal / 25;
   inputVal -= numQuarters * 25;
   
   numDimes = inputVal / 10;
   inputVal -= numDimes * 10;
   
   numNickels = inputVal / 5;
   inputVal -= numNickels * 5;
   
   numPennies = inputVal;
   
   
   if (numDollars > 0) {
      cout << numDollars;
      if (numDollars == 1) {
         cout << " Dollar" << endl;
      }
      else {
         cout << " Dollars" << endl;
      }
   }
   
   if (numQuarters > 0) {
      cout << numQuarters;
      if (numQuarters == 1) {
         cout << " Quarter" << endl;
      }
      else {
         cout << " Quarters" << endl;
      }
   }

   if (numDimes > 0) {
      cout << numDimes;
      if (numDimes == 1) {
         cout << " Dime" << endl;
      }
      else {
         cout << " Dimes" << endl;
      }
   }
   
   if (numNickels > 0) {
      cout << numNickels;
      if (numNickels == 1) {
         cout << " Nickel" << endl;
      }
      else {
         cout << " Nickels" << endl;
      }
   }
   
   if (numPennies > 0) {
      cout << numPennies;
      if (numPennies == 1) {
         cout << " Penny" << endl;
      }
      else {
         cout << " Pennies" << endl;
      }
   }
   
   return 0;
}