// 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p,q,r;
        cin >> p >> q >> r;
      if(p <= q && q<=r){
        if(p+q+r == 0){
          cout << 0 << endl;
          continue;
        }
        if((p+q+r) % 2 != 0){
          cout << -1 << endl;
          continue;
        }
      int zeroplace = 0;
      if(p==0) zeroplace++;
      if(q==0) zeroplace++;
      if(r==0) zeroplace++;
      
      if((p+q+r)%2 ==0 && zeroplace == 2){
        cout << -1 << endl;
        continue;
      }
      if(zeroplace == 1){
        cout << min({q,r}) << endl;
        continue;
        
      }
      if(zeroplace ==0){
        cout << 2* min({p,q,r}) << endl;
        continue;
      }
    }
      else{
        cout << -1 << endl;
        continue;
      }
    }
  
    return 0;
}
