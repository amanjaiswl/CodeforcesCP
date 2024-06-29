#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

bool isFair(ll n){
  ll original = n;
  while(n > 0){
    int digit = n % 10;
    if(digit != 0 && original % digit != 0){
      return false;
    }
    n/= 10;
  }
  return true;
}

ll findLeast( ll n){
  while(!(isFair(n))){
    n++;
  }
  return n;
}

void solve() {
    ll n;
    cin >> n;
    cout << findLeast(n) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
