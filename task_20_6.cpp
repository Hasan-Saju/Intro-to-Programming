#include <iostream>
#include <iomanip>   
#include <cmath>    
using namespace std;

int main() {
   int people;
   int numPizzas;
   double cost;

   /* Type your code here. */
   cin>>people;
   int sliceNeeded = people*2;
   numPizzas = ceil((double)sliceNeeded/12);
   cost = numPizzas*14.95;
   cout<<fixed<<setprecision(2);
   cout<<"People: "<<people<<"\n";
   cout<<"Pizza(s) needed: "<<numPizzas<<"\n";
   cout<<"Cost for "<<numPizzas<<" pizza(s): $"<<cost<<"\n";
   return 0;
}