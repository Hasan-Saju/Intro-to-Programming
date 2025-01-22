#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   
   /* Type your code here. */
   cin>>nickels>>dimes>>quarters;

   dollars = (0.05*nickels) + (.10*dimes) + (.25*quarters);

       cout << fixed << setprecision(2);
   cout<<"Amount: $"<<dollars<<"\n";
   
   return 0;
}