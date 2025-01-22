#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;

   /* Type your code here. Note: Include the math library above first. */
    cin>>x>>y>>z;

    cout<<pow(x,z)<<" "<<pow(x, pow(y,z))<<" "<<abs(y)<<" "<<sqrt(pow(x*y,z))<<"\n";
   return 0;
}
