// https://codeforces.com/problemset/problem/1447/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

void solve(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> v(n,vector<int> (m));

  ll ans = 0;
  ll minimum = 1e9;
  int negcnt = 0;
  for(int i=0; i< n; i ++){
    for(int j=0; j<m; j++){
      cin >> v[i][j];
      ans+= abs(v[i][j]);
      minimum = min(minimum,abs((ll)v[i][j]));
      if(v[i][j] < 0){
          negcnt++;
        
      }
    }
  }

  if((negcnt) & 1){
    ans -= 2* minimum;
    cout << ans << '\n';
  }
  else{
    cout << ans << '\n';
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
