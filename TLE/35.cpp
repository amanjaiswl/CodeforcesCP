#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  int n;
  cin >> n;

  vector<ll> v(n);
  for(auto &i : v){
    cin>> i;
    
  }
  ll ans = v[0];
  for(auto i : v){
    ans &= i;
  }
  cout << ans << "\n";


}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();

  }
  return 0;
}
