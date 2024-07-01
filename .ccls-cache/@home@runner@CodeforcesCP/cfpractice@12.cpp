// https://codeforces.com/contest/1987/problem/B

#include <iostream>
#include <vector>
#include <map>

#define ll long long

using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto &i : v){
    cin >> i;
  }

  map<int,int> freq;

  int cnt = 0;
  for(int i=0; i<n-1; i++){
    if(v[i+1] < v[i]) {
      freq[v[i]-v[i+1]]++;
      v[i+1] = v[i];
      cnt++;
    }
  }

  ll ans = 0, x =0;
  for(auto i : freq){
    ans+=(i.first - x) * (cnt +1);
    cnt-=i.second;
    x= i.first;
  }

  cout << ans << '\n';
  
}


int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}

