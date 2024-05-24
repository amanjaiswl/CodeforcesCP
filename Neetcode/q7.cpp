// https://neetcode.io/problems/top-k-elements-in-list

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    vector<int> v;
    int num;

    cout << "Enter numbers (end input with a non-integer):" << endl;
    while (cin >> num) {
        v.push_back(num);
    }

    // Clear the input buffer
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cout << "Give k: " << endl;
    cin >> k;

    if (k <= 0) {
        cerr << "k must be a positive integer" << endl;
        return 1;
    }

    unordered_map<int, int> freq;
    for (const auto& i : v) {
        freq[i]++;
    }

    vector<pair<int, int>> freqVector(freq.begin(), freq.end());

    sort(freqVector.begin(), freqVector.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    // Ensure k does not exceed the number of unique elements
    k = min(k, static_cast<int>(freqVector.size()));

    cout << "The " << k << " most frequent elements are: ";
    for (int i = 0; i < k; i++) {
        cout << freqVector[i].first << " ";
    }
    cout << endl;

    return 0;
}
