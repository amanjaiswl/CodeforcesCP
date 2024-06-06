// was so easy but still couldn't do it in the contest

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
   int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n;i++){
      cin >> v[i];
    }
    int k =INT_MAX;
    
    for(int i=0; i<n-1; i++){
      int z = max({v[i], v[i+1]});
      if(z < k){
        k = z;
      }
    }
    cout << k-1 << endl;
  }
  return 0;
}