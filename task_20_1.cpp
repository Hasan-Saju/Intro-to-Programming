#include <iostream>
#include <iomanip>   //For setprecision
using namespace std;

int main() {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   
   cin >> caffeineMg;
   cout << fixed << setprecision(2);   // All later cout's will print floating-point values to exactly 2 decimal places.
                                       // Ex: 3.60

   /* Type your code here. */
   double afterSixHrs = caffeineMg/2;
   double afterTwelveHrs = afterSixHrs/2;
   double after24Hrs = afterTwelveHrs/4;

   cout<<"After 6 hours: "<<afterSixHrs<<" mg\n";
   cout<<"After 12 hours: "<<afterTwelveHrs<<" mg\n";
   cout<<"After 24 hours: "<<after24Hrs<<" mg\n";

   return 0;
}
