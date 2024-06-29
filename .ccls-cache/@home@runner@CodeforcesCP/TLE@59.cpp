// https://codeforces.com/problemset/problem/1374/C

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  int openseen = 0;
  int closedseen = 0;
  int ans = 0;

  for(auto c : s){
    if(c == '(' ) openseen++;
    if(c == ')') closedseen++;
    if(closedseen > openseen) {
      closedseen = 0;
      openseen = 0;
      ans++;
    }
  }
  
  cout << ans << '\n';
}


int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
