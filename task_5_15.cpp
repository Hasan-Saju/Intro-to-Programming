#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int userInt;
   int sumInts;
   int numInts;
   int maxInt;
   double average;
      
   sumInts = 0;
   numInts = 0;
   maxInt  = -1;

   cin >> userInt;

   while (userInt >= 0) {
      sumInts = sumInts + userInt;
      numInts = numInts + 1;

      if (userInt > maxInt) {
         maxInt = userInt;
      }
      cin >> userInt;
   }
   
   average = (double)(sumInts) / numInts;
   
   cout << fixed << setprecision(2);
   cout << maxInt;
   cout << " " << average << endl;

   return 0;
}
