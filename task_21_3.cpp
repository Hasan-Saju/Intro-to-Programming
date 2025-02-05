#include <iostream>
using namespace std;

int main() {
    int val1;
    int val2;
    int max;
    
    cin >> val1;
    cin >> val2;

    max = val1;
    if (val2 > val1) {
       max = val2;
    }
    
    cout << "Max of " << val1 << " and " << val2 << " is " << max << endl;
    
    return 0;
}