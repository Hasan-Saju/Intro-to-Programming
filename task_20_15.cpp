#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const double TAX_RATE = 0.07;
   const double WASTE_PCT = 1.2;
   const double LABOR_RATE = 0.75;
   int width;
   int length;
   int sqFeet;
   double price;
   double carpet;
   double labor;
   double tax;
   double cost;
   double totalSales;
   totalSales = 0;

   // Order #1
   // Input price per sq foot, room width and room length
   cin >> price >> width >> length;

   // Calculate room square feet
   sqFeet = width * length;

   // Calculate carpet cost including 20% waste
   carpet = (sqFeet * WASTE_PCT) * price;

   // Calculate labor (0.75 per sq ft)
   labor = sqFeet * LABOR_RATE;

   // Calculate sales tax (7%)
   tax = (carpet + labor) * TAX_RATE;

   // Calculate total cost
   cost = carpet + tax + labor;

   cout << fixed << setprecision(2);

   // Output results
   cout << "Order #1" << endl;
   cout << "Room: " << sqFeet << " sq ft" << endl;
   cout << "Carpet: $" <<  carpet << endl;
   cout << "Labor: $" << labor << endl;
   cout << "Tax: $" << tax << endl;
   cout << "Cost: $" << cost << endl;
   totalSales += cost;

   // Order #2
   cin >> price >> width >> length;
   sqFeet = width * length;
   carpet = (sqFeet * WASTE_PCT) * price;
   labor = sqFeet * LABOR_RATE;
   tax = (carpet + labor) * TAX_RATE;
   cost = carpet + tax + labor;
   cout << "\nOrder #2" << endl;
   cout << "Room: " << sqFeet << " sq ft" << endl;
   cout << "Carpet: $" << carpet << endl;
   cout << "Labor: $" << labor << endl;
   cout << "Tax: $" << tax << endl;
   cout << "Cost: $" << cost << endl;
   totalSales += cost;

   // Order #3
   cin >> price >> width >> length;
   sqFeet = width * length;
   carpet = (sqFeet * WASTE_PCT) * price;
   labor = sqFeet * LABOR_RATE;
   tax = (carpet + labor) * TAX_RATE;
   cost = carpet + tax + labor;
   cout << "\nOrder #3" << endl;
   cout << "Room: " << sqFeet << " sq ft" << endl;
   cout <<"Carpet: $" << carpet << endl;
   cout << "Labor: $" << labor << endl;
   cout << "Tax: $" <<  tax << endl;
   cout << "Cost: $" <<  cost << endl;

   totalSales += cost;

   // Output total sales
   cout << endl << "Total Sales: $" << totalSales << endl;

   return 0;
}
