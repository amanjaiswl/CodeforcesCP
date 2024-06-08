#include <iostream>
#include <vector>
#include <cmath>
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

void generate() {
    for (int i = 2; i <= MAX; ++i) {
        if (isBinary(i)) {
            binaryDecimals.push_back(i);
        }
    }
}

bool binProd(int n) {
    if (n == 1) {
        return true;
    }
    bool ans = false;
    for (int i : binaryDecimals) {
        if (i > n) break;
        if (n % i == 0) {
            ans = ans || binProd(n / i);
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    vector<int> queries(t);
    for (int i = 0; i < t; ++i) {
        cin >> queries[i];
    }

    generate();

    for (int n : queries) {
        if (binProd(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
