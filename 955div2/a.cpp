// could do only a and c in the contest

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

void solve(){
  int a, b, c, d;
  cin >> a>> b>> c >> d;
  if((a < b && c < d)  || (a > b && c > d) ){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }

}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
