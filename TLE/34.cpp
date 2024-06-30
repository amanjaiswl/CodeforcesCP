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
  vector<ll> v(n);
  ll cnt1 = 0;
  ll cnt0 = 0;
  for(auto &i : v){
    cin >> i;
    if(i == 0){ 
    cnt0++;}
    if(i==1){
      cnt1++;
    }
  }
  
  cout << (ll)pow(2, cnt0) * cnt1 << "\n";

  
}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();

  }
  return 0;
}
