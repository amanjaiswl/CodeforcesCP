// https://codeforces.com/problemset/problem/1814/A

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n>> k;

    int x = n%k;
    if(x%2 == 0){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }

  
  
}