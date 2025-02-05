#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
   short shortA;
   int intB;
   long long longLongC;
   double doubleD;
   
   cin >> shortA;
   cin >> intB;
   cin >> longLongC;
   cin >> doubleD;
   
   auto result1 = shortA + longLongC;
   auto result2 = intB + doubleD;
   auto result3 = result1 + result2;
   
   cout << "result1 = " << result1 << endl;
   cout << "result2 = " << result2 << endl;
   cout << "result3 = " << result3 << endl;
   cout << endl;
   
   cout << "Data types:" << endl;
   cout << "shortA: " << typeid(shortA).name() << endl;
   cout << "intB: " << typeid(intB).name() << endl;
   cout << "longLongC: " << typeid(longLongC).name() << endl;
   cout << "doubleD: " << typeid(doubleD).name() << endl;
   cout << "result1: " << typeid(result1).name() << endl;
   cout << "result2: " << typeid(result2).name() << endl;
   cout << "result3: " << typeid(result3).name() << endl;
   
   return 0;
}
