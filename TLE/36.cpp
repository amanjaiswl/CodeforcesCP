#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  ll a,b;
  cin >> a >> b;
  if(a == b){
    cout << 0 << " " << 0 << "\n";
    return;
  }
  else{
    ll g = abs(a-b);
    ll m = min(a%g, g-a%g);
    cout << g << " " << m << "\n";
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
