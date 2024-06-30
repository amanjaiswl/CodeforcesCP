#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

#define ll long long

void solve() {
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<pair<ll, ll>> paired_vector;
    for (ll i = 0; i < n; i++) {
          paired_vector.emplace_back(b[i], a[i]);
    }

    sort(paired_vector.begin(), paired_vector.end());

    ll cost = p; 
    ll totalPeople = 1;
    ll i = 0;

    while (totalPeople < n) {
        ll maxReach = min(paired_vector[i].second, n - totalPeople);
        ll additionalCost = maxReach * paired_vector[i].first;

        
        if (p * maxReach < additionalCost) {
            cost += p * (n - totalPeople);
            break;
        } else {
            cost += additionalCost;
            totalPeople += maxReach;
            i++;
        }
    }

    cout << cost << "\n";
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
