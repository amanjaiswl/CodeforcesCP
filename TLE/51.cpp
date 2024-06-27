#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

#define ll long long
using namespace std;

#define ll long long

void solve(){
  ll w,h;
  cin >> w >> h;

  ll k1;
  cin >> k1;
  vector<ll> v(k1);
  for(ll i=0;i <k1; i++){
    cin >> v[i];
  }
  
  ll k2;
  cin >> k2;
  vector<ll> v1(k2);
  for(ll i=0;i <k2; i++){
    cin >> v1[i];
  }

  ll maxh = max(v[k1-1] - v[0], v1[k2-1] - v1[0]);
  ll ans1 = maxh * h;

  ll k3;
  cin >> k3;
  vector<ll> v2(k3);
  for(ll i=0;i <k3; i++){
    cin >> v2[i];
  }

  ll k4;
  cin >> k4;
  vector<ll> v3(k4);
  for(ll i=0;i <k4; i++){
    cin >> v3[i];
  }

  ll maxw = max(v2[k3-1] - v2[0], v3[k4-1] - v3[0]);
  ll ans2 = maxw * w;

  ll ans = max(ans1, ans2);
  cout << ans << '\n';

}




int main(){
  ll t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
