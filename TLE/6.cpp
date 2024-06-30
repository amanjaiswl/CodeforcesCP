#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int>freq;
    for(int i=0;i<n;i++){
      cin >> arr[i];
      freq[arr[i]]++;
    }
    
    int x = ceil((n+1)/2);

    int flag =0;
    int len = freq.size() ;

    if(len==1){
      cout << "yes" << endl;
      flag =1;
    }
    if(len ==2){
    for(auto i: freq){
      if(i.second == x){
        cout << "yes" << endl;
        flag =1;
        break;
      }
    }
    }

    if(flag==0){
      cout << "no" << endl;
    }
    
  }
}