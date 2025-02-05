#include <iostream>
using namespace std;

int main() {
   
   /* Type your code here. */
   int a, b, c;
   cin>>a>>b>>c;
   int smallest;

   if(a<b)
   {
    smallest = a;
   }
   else
   {
    smallest = b;
   }

   if(c<smallest)
   {
    smallest = c;
   }  
    cout<<smallest<<"\n";
   return 0;
}