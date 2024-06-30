//https://codeforces.com/problemset/problem/1829/B

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int arr[n];

    int maxzero = 0;
    int currlen = 0;
    
    for(int i=0; i<n;i++){
      cin >> arr[i];
      if(arr[i]==0){
        currlen++;
      }
      else{
        maxzero = max(currlen, maxzero);
        currlen =0;
      }
    }

    cout << max(maxzero,currlen) << endl;


    
  }
}