#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
      cin >> a[i];
  }

  int half = ceil(n/2);
  int middle = a[half];

  int count =0;
  for(int i=0;i<n;i++){
    if(a[i]==middle){
      count++;
    }
  }
  sort(a.begin(), a.end());
  if(a[0] == a.back()){
    cout << 0 << endl;
    return;
  }
  else{
    cout << n-count << endl;
    return;
  }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}