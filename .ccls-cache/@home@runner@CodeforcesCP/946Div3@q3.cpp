

#include <iostream>
#include <vector>
#include <unordered_map>
#include <tuple>
#include <functional>

using namespace std;

// Custom hash function for std::tuple<int, int, int>
struct tuple_hash {
    template <class T1, class T2, class T3>
    size_t operator() (const std::tuple<T1, T2, T3>& tuple) const {
        auto hash1 = std::hash<T1>{}(std::get<0>(tuple));
        auto hash2 = std::hash<T2>{}(std::get<1>(tuple));
        auto hash3 = std::hash<T3>{}(std::get<2>(tuple));
        return hash1 ^ hash2 ^ hash3;
    }
};

// Function to count beautiful pairs of triples
int count_beautiful_pairs(const vector<int>& a) {
    int n = a.size();
    unordered_map<tuple<int, int, int>, int, tuple_hash> triple_map;
    int count = 0;

    // Generate triples and store them in the map
    for (int j = 0; j < n - 2; ++j) {
        auto triple = make_tuple(a[j], a[j + 1], a[j + 2]);
        triple_map[triple]++;
    }

    // Compare each triple with every other triple to check if they differ in exactly one position
    for (int j = 0; j < n - 2; ++j) {
        auto triple1 = make_tuple(a[j], a[j + 1], a[j + 2]);

        for (int k = j + 1; k < n - 2; ++k) {
            auto triple2 = make_tuple(a[k], a[k + 1], a[k + 2]);

            // Check if triple1 and triple2 differ in exactly one position
            int diff_count = 0;
            if (get<0>(triple1) != get<0>(triple2)) diff_count++;
            if (get<1>(triple1) != get<1>(triple2)) diff_count++;
            if (get<2>(triple1) != get<2>(triple2)) diff_count++;

            if (diff_count == 1) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;
    vector<int64_t> results; // Use int64_t for large results

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        results.push_back(count_beautiful_pairs(a));
    }

    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
