// https://codeforces.com/problemset/problem/1850/D

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long


using namespace std;


void solve(){
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  int cnt = 1;
  int ans = 1;
  for(int i =0; i<n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for(int i=0;i<n-1;i++){
    if(v[i+1] - v[i] <= k){
      cnt++;
    }
    else{
      cnt  = 1;
    }
    ans = max(ans, cnt);
  }
  cout << n - ans <<"\n";
  
}

int main(){
  int t;
  cin>>t;
  while (t--){
    solve();

  }
  return 0;
}
