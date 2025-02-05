#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    double a, b;
   /* Type your code here. */
   cin>>a>>b;

   double c = sqrt((a*a)+(b*b));
   cout << fixed << setprecision(2);
    cout<<"Right triangle has side lengths "<<a<<" and "<<b<<"\n";
    cout<<"Hypotenuse is "<<c<<"\n";

   return 0;
}