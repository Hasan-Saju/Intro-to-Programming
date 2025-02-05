#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1;
	string str2;
	string longest;
	string shortest;

   /* Type your code here */
   cin>>str1>>str2;

    int s1= str1.size();
    int s2= str2.size();

    if(s1>s2)
    {
        longest = str1;
        shortest =str2;
         cout<<longest<<" is longer than "<<shortest<<"\n";
    }
    else if(s2>s1) 
    {
        longest = str2;
        shortest = str1;
         cout<<longest<<" is longer than "<<shortest<<"\n";
    }

    else
    {
        cout<<str1<<" and "<<str2<<" have the same length\n";
    }

   return 0;
}