#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    vector<int> points = {x1, x2, x3};
    sort(points.begin(), points.end());
    int median = points[1];
    int result = abs(median - x1) + abs(median - x2) + abs(median - x3);
    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
