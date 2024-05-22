#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == k) {
              flag = 1;
            }
        }
        if (flag ==0){
          cout << "NO" << endl;
        }
      else{
        cout << "YES" << endl;
      }
    }
}



// misunderstood the question and did the below one
/*
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        unordered_map<int, int> freq;
        int num;

        for (int i = 0; i < n; i++) {
            cin >> num;
            v[i] = num;
            freq[num]++;
        }

        int maxFreq = 0;
        int elem = -1;
        for (auto& p : freq) {
            if (p.second > maxFreq) {
                maxFreq = p.second;
                  elem = p.first;
            }
        }

        if (elem == k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
*/