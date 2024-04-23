// chatgpt did it. very mildly undestood.
// Q - https://codeforces.com/contest/1955/problem/E

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;


// bool canConvertAllOnes(string &s, int k) {
//     int n = s.size();
//     vector<int> flip(n + 1, 0); 
//     int flipEffect = 0; 
//     int flipCount = 0;

//     for (int i = 0; i < n; ++i) {
//         flipEffect += flip[i];
//         if ((s[i] == '0' && flipEffect % 2 == 0) || (s[i] == '1' && flipEffect % 2 == 1)) {
//             // We need to flip at position i to make s[i] a '1'
//             if (i + k > n) return false; 
//             flipCount++;
//             flipEffect++; 
//             flip[i + k]--; 
//         }
//     }

//     return true;
// }

// void solve() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         string s;
//         cin >> n >> s;

//         int maxK = 1; 

//         for (int k = 1; k <= n; ++k) {
//             if (canConvertAllOnes(s, k)) {
//                 maxK = k; 
//             }
//         }

//         cout << maxK << "\n";
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve(); 

//     return 0;
// }
