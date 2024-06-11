#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countGood(const vector<int>& arr) {
    int count = 0;
    long long prefix_sum = 0;
    int max_element = 0;
    for (int i = 0; i < arr.size(); ++i) {
        prefix_sum += arr[i];
        max_element = max(max_element, arr[i]);
        if (max_element == prefix_sum - max_element) {
            ++count;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
       if(n==1 && arr[0] == 0){
         cout << 1 << "\n";
       }else{
        cout << countGood(arr) << endl;}
    }
    return 0;
}
