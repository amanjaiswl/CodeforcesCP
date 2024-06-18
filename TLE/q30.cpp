// https://codeforces.com/problemset/problem/1679/A
#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    if (n %2 != 0 || n < 4) {
        cout << -1 << "\n";
        return;
    }

    ll minBus = (n + 5) / 6; 
    ll maxBus = n / 4;       

    cout << minBus << " " << maxBus << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}