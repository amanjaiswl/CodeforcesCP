#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, x;
    cin >> n >> x;
    int ans = 0;
    int preva =0;
    for(int i=0; i<n; i++){
      int a;
      cin >> a;
      ans = max(ans, a-preva);
      preva = a;
      
    }
    ans = max(ans, 2 * (x - preva));
    cout << ans << endl;

  }
}