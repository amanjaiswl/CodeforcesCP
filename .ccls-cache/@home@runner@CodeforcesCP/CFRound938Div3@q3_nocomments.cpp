#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n,k;
    cin >> n >> k;

    int arr[n];
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }

    int flag = 0;
    int front =0;
    int back = n-1;
    int sunkShips = 0; 

    for(int attack = 0; attack < k; attack++){
      if(front > back) { 
        break;
      }

      
      int targetIndex = (flag == 0) ? front : back;
      if(arr[targetIndex] > 0){
        arr[targetIndex]--; 
        if(arr[targetIndex] == 0) { 
          sunkShips++;
          if(flag == 0) front++; 
          else back--; 
        }
      } else { 
        if(flag == 0) front++;
        else back--;
        attack--; 
        continue; 
      }

      flag = 1 - flag; 
    }

    cout << sunkShips << endl; 

    return 0;

  }
}