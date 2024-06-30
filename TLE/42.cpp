#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int cnt_even = 0;
  int flag = 0;
  int ans = k;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % k == 0) {
            flag = 1;
        }
        if (v[i] % 2 == 0) {
            cnt_even++;
        }
      ans = min(ans, k - v[i] % k);
    }
  if(flag){
    cout << 0 << "\n";
    return;
  }

    if(k == 4){
      if(cnt_even >= 2) ans = 0;
      else if(cnt_even == 1) ans = min(ans, 1);
      else ans = min(ans, 2);
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
