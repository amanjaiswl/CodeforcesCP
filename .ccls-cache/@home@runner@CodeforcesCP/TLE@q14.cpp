// https://codeforces.com/problemset/problem/1857/A
// was very close to the answer. did the two by two matrix logic thing for oddcount and odd and evencount and even. but made it more complex.

#include <iostream>
using namespace  std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    int evencount =0;
    int oddcount =0;
    for(int i=0;i<n;i++){
      if(arr[i]%2 ==0){
        evencount++;
      }
      else{
        oddcount++;
      }
    }

  if(oddcount%2 == 0){
    cout << "Yes" << endl;
  }  
    else{
      cout << "No" << endl;
    }
  }
}
