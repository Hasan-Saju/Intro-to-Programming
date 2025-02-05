#include <iostream>
using namespace std;

int main() {
   int a;
   int b;
   int c;
   int median;
   
   // Read three integers
   cin >> a;
   cin >> b;
   cin >> c;
   
   // Assume a is the median
   median = a;
   
   // Check if b is the median
   if (b > a && b < c) {
      median = b;
   }
   else if (b > c && b < a) {
      median = b;
   }
   
   // Check if c is the median   
   if (c > a && c < b) {
      median = c;
   }
   else if (c > b && c < a) {
      median = c;
   }
   
   // Output median
   cout << median << endl;

   return 0;
}