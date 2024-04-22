// question : https://leetcode.com/problems/check-if-array-is-good/description/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void func1(int *arr, int len){
  int max = 0;
  for(int i=0; i<len; i++){
    if( arr[i]>max)
      max = arr[i];
  }


  if (len == max+1){
    unordered_map<int, int> freq;
    for(int i=0; i<len; i++){
      freq[arr[i]]++;
    }
    int flag = 1;
    if(freq[max] == 2){
    for(int i=0; i<len-2; i++){
      if((freq[arr[i]] != 1) && freq[i] != freq[max]){
        flag = 0;
        break;
      }
    }
    }

    if(flag == 1){
      cout << "true" << endl;
    }
    else{
      cout << "false" << endl;
    }

}
  else{
    cout << "false" << endl;
  }
}


int main(){
  int arr[] = {1,2,3,3};
  int len = sizeof(arr) / sizeof(arr[0]);  
  func1(arr, len);


}