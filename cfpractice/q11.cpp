#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
    string s;
    cin >> s;
    int cost = 4; 
    vector<int> numbers(4);

    for (int i = 0; i < 4; ++i) {
        numbers[i] = s[i] - '0';
        if (numbers[i] == 0) {
            numbers[i] = 10;
        }
    }
    cost += numbers[0]-1;

    for (int i = 1; i < 4; ++i) {
        cost += abs(numbers[i] - numbers[i-1]);
    }

    cout << cost << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
