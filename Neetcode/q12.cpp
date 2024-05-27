#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(){
  vector<int> v;
  int num;
  while(cin >> num){
    v.push_back(num);
  }

  

  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');


  int target;
  cout << "give target: ";
  
  cin >> target;


  int left =0;
  int right = v.size()-1;

  int currentSum =0;

  while(left < right){
    currentSum = v[left] + v[right];
    if(currentSum > target){
      right--;
    }
    else if(currentSum < target){
      left++;
    }
    else{
      cout << left+1 << ", " << right+1 << endl;
      break;
    }
  }
}