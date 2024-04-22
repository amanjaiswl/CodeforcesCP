
/* Brute-force
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int* arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int* b = new int[m];
        unordered_map<int, int> b_freq;
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            b_freq[b[i]]++;
        }

        int good_subsegments = 0;
        for (int i = 0; i <= n - m; i++) {
            unordered_map<int, int> window_freq;
            int match_count = 0;

            for (int j = i; j < i + m; j++) {
                window_freq[arr[j]]++;

                if (window_freq[arr[j]] <= b_freq[arr[j]])
                    match_count++;
            }

            if (match_count >= k)
                good_subsegments++;
        }

        cout << good_subsegments << endl;

        delete[] arr;
        delete[] b;
    }

    return 0;
}

*/



// sliding window
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int b[m];
        unordered_map<int, int> freq_b, window;
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            freq_b[b[i]]++;
        }

        int count = 0, good_subsegments = 0;
        for (int i = 0; i < m; i++) {
            window[arr[i]]++;
            if (window[arr[i]] <= freq_b[arr[i]])
                count++;
        }
        if (count >= k) good_subsegments++;

        // Slide the window
        for (int i = m; i < n; i++) {
            // Decrease count for the outgoing element if it was contributing to the match count
            if (window[arr[i - m]] <= freq_b[arr[i - m]])
                count--;
            window[arr[i - m]]--;

            // Increase count for the incoming element if it contributes to the match count
            window[arr[i]]++;
            if (window[arr[i]] <= freq_b[arr[i]])
                count++;

            if (count >= k) good_subsegments++;
        }

        cout << good_subsegments << "\n";
    }

    return 0;
}
