#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;  
    while(t--){
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
      if((p1+p2+p3)%2 != 0){
        cout<< -1 << endl ;
        continue;
      }
  int totalGame = (p1 + p2 + p3) / 2;
  
  cout << min(totalGame, p1 + p2) << endl;
    }
    return 0;
}
