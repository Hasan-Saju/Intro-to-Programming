#include <iostream>
#include <iomanip>      //For setprecision
using namespace std;

int main() {

    double mileage, cost;
   // Type your declarations and any other code before your cout's here.
   
   cout << fixed << setprecision(2);   // All later cout's will print floating-point values to exactly 2 decimal places.
                                       // Ex: 3.60
   // Type your cout code here
   cin>>mileage>>cost;

   double costForTwenty = (20/mileage)*cost;
   double costForSeventyFive = (75/mileage)*cost;
   double costFiveHundred = (500/mileage)*cost;

   cout<<costForTwenty<<" "<<costForSeventyFive<<" "<<costFiveHundred<<"\n";
   
   return 0;
}
