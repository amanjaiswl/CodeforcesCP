// https://codeforces.com/contest/1982/problem/F
// gpt answer. didn't submit 


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct SegmentTree {
    int n;
    vector<int> tree_min, tree_max;

    SegmentTree(const vector<int>& a) {
        n = a.size();
        tree_min.resize(4 * n);
        tree_max.resize(4 * n);
        build(a, 0, 0, n - 1);
    }

    void build(const vector<int>& a, int node, int start, int end) {
        if (start == end) {
            tree_min[node] = a[start];
            tree_max[node] = a[start];
        } else {
            int mid = (start + end) / 2;
            build(a, 2 * node + 1, start, mid);
            build(a, 2 * node + 2, mid + 1, end);
            tree_min[node] = min(tree_min[2 * node + 1], tree_min[2 * node + 2]);
            tree_max[node] = max(tree_max[2 * node + 1], tree_max[2 * node + 2]);
        }
    }

    void update(int idx, int value, int node, int start, int end) {
        if (start == end) {
            tree_min[node] = value;
            tree_max[node] = value;
        } else {
            int mid = (start + end) / 2;
            if (start <= idx && idx <= mid) {
                update(idx, value, 2 * node + 1, start, mid);
            } else {
                update(idx, value, 2 * node + 2, mid + 1, end);
            }
            tree_min[node] = min(tree_min[2 * node + 1], tree_min[2 * node + 2]);
            tree_max[node] = max(tree_max[2 * node + 1], tree_max[2 * node + 2]);
        }
    }

    pair<int, int> query(int L, int R, int node, int start, int end) {
        if (R < start || end < L) {
            return {INT_MAX, INT_MIN};
        }
        if (L <= start && end <= R) {
            return {tree_min[node], tree_max[node]};
        }
        int mid = (start + end) / 2;
        auto left = query(L, R, 2 * node + 1, start, mid);
        auto right = query(L, R, 2 * node + 2, mid + 1, end);
        return {min(left.first, right.first), max(left.second, right.second)};
    }

    void update(int idx, int value) {
        update(idx, value, 0, 0, n - 1);
    }

    pair<int, int> query(int L, int R) {
        return query(L, R, 0, 0, n - 1);
    }
};

void find_min_subarray(const vector<int>& a, SegmentTree& st, int& l, int& r) {
    int n = a.size();
    l = -1;
    r = -1;

    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            l = i;
            break;
        }
    }

    if (l == -1) {
        return;
    }

    for (int i = n - 1; i > 0; --i) {
        if (a[i] < a[i - 1]) {
            r = i;
            break;
        }
    }

    auto [min_val, max_val] = st.query(l, r);

    for (int i = 0; i <= l; ++i) {
        if (a[i] > min_val) {
            l = i;
            break;
        }
    }

    for (int i = n - 1; i >= r; --i) {
        if (a[i] < max_val) {
            r = i;
            break;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int q;
    cin >> q;

    vector<pair<int, int>> mods(q);
    for (int i = 0; i < q; ++i) {
        cin >> mods[i].first >> mods[i].second;
    }

    SegmentTree st(a);

    int l, r;
    find_min_subarray(a, st, l, r);
    if (l == -1) {
        cout << "-1 -1" << endl;
    } else {
        cout << l + 1 << " " << r + 1 << endl;
    }

    for (const auto& mod : mods) {
        a[mod.first - 1] = mod.second;
        st.update(mod.first - 1, mod.second);
        find_min_subarray(a, st, l, r);
        if (l == -1) {
            cout << "-1 -1" << endl;
        } else {
            cout << l + 1 << " " << r + 1 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
