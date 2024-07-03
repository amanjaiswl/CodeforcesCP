#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long


void solve(){
  ll n, c; 
  cin >> n >> c;
  vector<ll> a(n);
  for(int i=0 ; i<n; i++){
    cin >> a[i];
  }
  

  ll low = 1;
  ll high = 1e9;
  while(low<=high){
    ll mid = (low+high)/2;
    ll sum = 0;

    for(int i=0 ; i<n; i++){
      sum += (a[i] +2*mid) * (a[i] +2*mid);
      if(sum>c) break;
    }

    if(sum == c){
      cout << mid << '\n';
      return;
    }
    else if(sum > c)
      high = mid-1;
    else
      low = mid+1;
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
