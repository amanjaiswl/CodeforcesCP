#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Attack {
    long long damage;
    long long cooldown;
    long long nextUse;


    bool operator>(const Attack& other) const {
        return nextUse > other.nextUse;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long h;
        int n;
        cin >> h >> n;

        vector<Attack> attacks(n);

        for (int i = 0; i < n; ++i) {
            cin >> attacks[i].damage;
        }

        for (int i = 0; i < n; ++i) {
            cin >> attacks[i].cooldown;
            attacks[i].nextUse = 0;
        }

        sort(attacks.begin(), attacks.end(), [](const Attack &a, const Attack &b) {
            return a.damage > b.damage;
        });

        priority_queue<Attack, vector<Attack>, greater<Attack>> pq;

        for (const auto& attack : attacks) {
            pq.push(attack);
        }

        long long currentTurn = 0;

        while (h > 0) {
            long long totalDamage = 0;

            vector<Attack> usedAttacks;

            while (!pq.empty() && pq.top().nextUse <= currentTurn) {
                Attack attack = pq.top();
                pq.pop();
                totalDamage += attack.damage;
                attack.nextUse = currentTurn + attack.cooldown;
                usedAttacks.push_back(attack);
            }

            for (const auto& attack : usedAttacks) {
                pq.push(attack);
            }

            h -= totalDamage;

            if (totalDamage == 0 && !pq.empty()) {
                currentTurn = pq.top().nextUse;
            } else {
                currentTurn++;
            }
        }

        cout << currentTurn << "\n";
    }

    return 0;
}