// https://codeforces.com/problemset/problem/1807/D
// it's right but time exceeded on test 6 . need prefix sums here

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<ll> prefixSum(n + 1, 0); 

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        prefixSum[i + 1] = prefixSum[i] + v[i]; 
    }
    

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        

        ll sum = (prefixSum[n]-(prefixSum[r] - prefixSum[l-1] )) + ((r - l + 1) * k);
        if (sum & 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

/*
original approach :

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  int n,q;
  cin>> n >> q;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  while(q--){
    int l, r,k;
    int sum = 0;
    cin >> l >> r >> k;
    for(int i=0; i<n;i++){
      if(i+1 >= l && i+1 <= r){
        continue;
      }
      sum+= v[i];
    }
    sum+= (r-l +1) *k;
    if(sum & 1){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
  }
}


int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}



*/