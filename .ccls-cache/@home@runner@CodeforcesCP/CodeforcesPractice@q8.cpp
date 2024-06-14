#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ll long long


using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
    int a,b,n;
    cin >> a >> b >> n;
    vector<int> v(n);
    ll ans = b;
    for(int i=0; i<n; i++){
      cin >> v[i];
      ans += min(a - 1, v[i]);
    }

    cout << ans << "\n";

  }
  return 0;
}
