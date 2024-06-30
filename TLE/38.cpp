#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  ll n;
  cin >> n;
  if((n & (n-1)) ==0){
    cout << "NO\n";
    return; 
  }
  else{
    cout << "YES\n";
    return;
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
