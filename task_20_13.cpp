#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

double a,b,c;
   /* Type your code here. */
   cin>>a>>b>>c;

    double s = (a+b+c)/2;
   double area = sqrt(s*(s-a)*(s-b)*(s-c));
   cout << fixed << setprecision(2);
   cout<<"Triangle area = "<<area<<"\n";

   return 0;
}
