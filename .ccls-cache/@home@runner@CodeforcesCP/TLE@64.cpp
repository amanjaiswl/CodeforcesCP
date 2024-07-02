#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long


void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> x(q);
    for (int i = 0; i < q; ++i) {
        cin >> x[i];
    }

  int minx = 31;  

  for (int i = 0; i < q; ++i) {
      int currx = x[i];

      if (currx < minx) {
          int power = 1 << currx;  
          int add_value = power >> 1;  

          for (int j = 0; j < n; ++j) {
              if (a[j] % power == 0) {
                  a[j] += add_value;
              }
          }

          minx = currx;  
      }
  }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
