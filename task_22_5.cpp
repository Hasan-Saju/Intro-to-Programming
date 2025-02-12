#include <iostream>
using namespace std;

int main() {
   int userNum;
   int leftDigit;
   int rightDigit;
   bool digitsSame;
   
   cin >> userNum;
   if ( (userNum < 11) || (userNum > 99) ) {
      cout << "Input must be 11-99";
   }
   else {
      digitsSame = false;
      while (!digitsSame) {
         cout << userNum << " ";
         rightDigit = userNum % 10; // Ex: 93 % 10 is 3
         leftDigit =  userNum / 10; // Shift right. Ex: (93 / 10) is 9
         digitsSame = (leftDigit == rightDigit);
         userNum = userNum - 1;
      }
   }
   
   cout << endl;

   return 0;
}
