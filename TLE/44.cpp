#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  int n,k;
  cin>> n >> k;
  vector <int> a(n);
  for(auto &i: a){
    cin >> i;
  }
  vector <int> b(n);
  for(int i=0; i< n;i++){
    int x = a[i] % k;
    if(x ==0){
      b[i] = k;
    }
    else{
      b[i] = x;
    }
  }
  vector<pair<int, int>> paired_vector;
  for (ll i = 0; i < n; i++) {
        paired_vector.emplace_back(b[i], i+1);
  }

  sort(paired_vector.begin(), paired_vector.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
      if (a.first == b.first) return a.second < b.second;  
      
      return a.first > b.first;  
  });


  for(auto i : paired_vector){
    cout << i.second << " ";
  }
  cout << "\n";
  

}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
