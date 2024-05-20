
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int ys = (y + 1) / 2;

      
        int remaining11 = 15 * ys - 4 * y;

        if (x <= remaining11) {
            cout << ys << endl;
        } else {
            int remain = x - remaining11;
            int xs = (remain + 14) / 15;  
            cout << ys + xs << endl;
        }
    }
    return 0;
}
