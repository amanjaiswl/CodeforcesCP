#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100000;
vector<int> binaryDecimals;

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

void generateBinaryDecimals() {
    for (int i = 2; i <= MAX; ++i) {
        if (isBinary(i)) {
            binaryDecimals.push_back(i);
        }
    }
}

bool isBc(int n) {
    if (n == 1) {
        return true;
    }
    bool ans = false;
    for (int i : binaryDecimals) {
        if (i > n) break;
        if (n % i == 0) {
            ans = ans || isBc(n / i);
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    generateBinaryDecimals();

    while (t--) {
        int n;
        cin >> n;
        if (isBc(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
