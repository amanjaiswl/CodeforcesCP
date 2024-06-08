// this code is failing on 5101st token of test 2. expected yes output no. how ??

#include <iostream>
using namespace std;

bool isBinary(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isBinary(n)) {
            cout << "Yes" << endl;
            continue;
        } else {
            while (n % 11 == 0 && n > 0) {
                n /= 11;
            }
            if (isBinary(n)) {
                cout << "Yes" << endl;
              continue;
            }else {
              cout << "No\n";
              }
            } 
        }

    return 0;
}