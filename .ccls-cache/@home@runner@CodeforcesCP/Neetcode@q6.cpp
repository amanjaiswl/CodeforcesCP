// https://neetcode.io/problems/anagram-groups

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
  string input;
  getline(cin, input);

  input = input.substr(8, input.size()-9);

  vector <string> strs;
  stringstream ss(input);
  string word;

  while(getline(ss, word,',')){
    word.erase(remove(word.begin(), word.end(),'"'), word.end());
    strs.push_back(word);
  }

  unordered_map<string,vector<string>>freq;

  for (auto str : strs) {
      string sorted = str;
      sort(sorted.begin(),sorted.end());

    if(freq.find(sorted) == freq.end()){
      freq[sorted] = vector<string> {str};
    }
    else{
      freq[sorted].push_back(str);
    }
  }

  cout << "[";
  for(auto pair: freq){
    cout << "[";
    for(auto word:pair.second){
      cout <<  word << ", ";
    }
    cout << "], ";
  }
  cout << "]";

  return 0;
  
}