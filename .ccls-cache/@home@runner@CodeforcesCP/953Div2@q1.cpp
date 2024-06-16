#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  int n;
  cin>> n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin >> v[i];
  }
  int last = v[n-1];
  v.pop_back();
  sort(v.begin(), v.end());
  cout << last + v.back() << "\n";


}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();

  }
  return 0;
}
