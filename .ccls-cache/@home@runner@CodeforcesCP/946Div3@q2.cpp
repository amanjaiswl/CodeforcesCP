#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector <char> v;
  for(char c: s){
    if((find(v.begin(), v.end(), c) == v.end())){
      v.push_back(c);
    }
  }

  sort(v.begin(), v.end());


  unordered_map<char, char> char_map;
  int vs = v.size();
  for (int i = 0; i < vs / 2; ++i) {
    char_map[v[i]] = v[vs - 1 - i];
    char_map[v[vs - 1 - i]] = v[i];
  }
  if (vs % 2 != 0) {
    char_map[v[vs / 2]] = v[vs / 2];
  }

  for (char c : s) {
      if (char_map.find(c) != char_map.end()) {
          cout << char_map[c];
      }
  }

  cout << endl;
  
}

int main(){
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}