#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

void solve(){
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for(auto &i: v){
    cin >> i;
  }

  int change =0;
  int maxel = v[0];
  int minel = v[0];
  
  for(int i=1; i<n;i++){
    if(v[i] > maxel) maxel = v[i];
    if(v[i] < minel) minel = v[i];
    if(maxel - minel > 2*x){
      change++;
      minel = v[i];
      maxel = v[i];
    }
  }
  
  cout << change << "\n";
  

}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
