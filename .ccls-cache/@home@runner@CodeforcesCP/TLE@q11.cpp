#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  int min=abs(arr[0]);
  for(int i=1;i<n;i++){
    if(abs(arr[i])<min){
      min = abs(arr[i]);
    }
  }
  cout << abs(min) << endl;
}