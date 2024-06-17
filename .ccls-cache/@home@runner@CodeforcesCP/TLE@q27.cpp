// https://codeforces.com/problemset/problem/1828/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

int gcd(int a, int b){
  while(b!=0){
    int temp = b;
    b = a%b;
    a = temp;
    
  }
  return a;
  
}

void solve(){
  int n;
  cin >> n;
  vector<int> v(n);
  int k =0;
  for(int i=0; i<n; i++){
    cin >> v[i];
    k = gcd(k, abs(v[i] - (i+1)));
  }
  cout << k << "\n";


}


int main(){
  int t;
  cin>>t;
  while (t--){
    solve();

  }
  return 0;
}
