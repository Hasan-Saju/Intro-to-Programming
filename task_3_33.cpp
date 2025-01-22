#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

   /* Type your code here. */
   cin>>num1>>num2>>num3>>num4;

   int product = num1*num2*num3*num4;
   int sum = num1+num2+num3+num4;
   int avg = sum/4;

   cout<<product<<" "<<avg<<"\n";

    cout << fixed << setprecision(3); 

    double product2 = (double)num1*num2*num3*num4;
   double sum2 = (double)num1+num2+num3+num4;
   double avg2 = (double)sum2/4;

    cout<<product2<<" "<<avg2<<"\n";

   return 0;
}
