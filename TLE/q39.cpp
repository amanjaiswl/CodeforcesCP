#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

void solve(){
  int n, x;
  cin >> n >> x;
  ll minSum = 0;
  ll maxSum = 0;
  vector<ll> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
    minSum += v[i];
    maxSum += (ll) ceil((double)v[i] / x);
  }
  cout << (ll) ceil((double)minSum / x) << " " << maxSum << "\n";
}

int main(){
  int t;
  cin >> t;
  while (t--){
    solve();
  }
  return 0;
}
