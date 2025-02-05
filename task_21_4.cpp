#include <iostream>
using namespace std;

int main() {
    int val1;
    int val2;
    int val3;
    int max;

    cin >> val1;
    cin >> val2;
    cin >> val3;

    // First assume val1 is the largest.
    max = val1;

    // Update max if val2 is larger
    if (val2 > max) {
       max = val2;
    }

    // Update max if val3 is larger.
    if (val3 > max) {
       max = val3;
    }

    cout << "Max of [" << val1 << ", " << val2 << ", " << val3 << "] is " << max << endl;

    return 0;
}