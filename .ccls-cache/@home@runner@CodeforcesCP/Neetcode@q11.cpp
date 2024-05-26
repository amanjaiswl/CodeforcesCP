// https://neetcode.io/problems/longest-consecutive-sequence
// my code. doing it in nlogn (sorting). the question asks for O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int num;
    while (cin >> num) {
        v.push_back(num);
    }

    unordered_map<int, int> freq;
    for (const auto& i : v) {
        freq[i]++;
    }

    vector<pair<int, int>> freqVector(freq.begin(), freq.end());

    sort(freqVector.begin(), freqVector.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    int currentcount = 1;  
    int maxcount = 1; 
    for (int i = 1; i < freqVector.size(); i++) {  
        if (freqVector[i].first - freqVector[i - 1].first == 1) {
            currentcount++;
            if (currentcount > maxcount) {
                maxcount = currentcount;
            }
        } else {
            currentcount = 1;  
        }
    }

    cout << maxcount << endl;

    return 0;
}


/*
the ideal solution. O(n)------
unordered_set<int> numset(v.begin(), v.end());

int longeststreak = 0;

for(int num : v){
if(!numset.count(num-1)){
int currentnum = num;
int currentstreak =1;
    while(numset.count(currentnum+1)){
    currentnum++;
    currentstreak++;
    }
  longeststreak = max(longeststreak, currentstreak);
}
}

*/