#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main() {

   /* Type your code here. Include the math library above first. */
    double f;
    cin>>f;
    double r = pow(2.0, (double)1/12);
    cout << fixed << setprecision(2);
    cout<<f*pow(r,0.0)<<" Hz\n";
    cout<<f*pow(r,1.0)<<" Hz\n";
    cout<<f*pow(r,2.0)<<" Hz\n";
    cout<<f*pow(r,3.0)<<" Hz\n";
   return 0;
}