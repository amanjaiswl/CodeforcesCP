#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long countInRange(long long interval, long long start, long long end) {
    if (start > end) return 0;
    return end / interval - (start - 1) / interval;
}

long long maxVisible(long long a, long long b, long long m) {
    long long cycle = a / gcd(a, b) * b;  
    long long maxVisible = 0;

    for (long long timeA = 0; timeA < cycle; timeA += a) {
        long long visibleFromB = countInRange(b, max(0LL, timeA - m), timeA + m);
        long long visibleFromA = countInRange(a, max(0LL, timeA - m), timeA + m);
        maxVisible = max(maxVisible, visibleFromA + visibleFromB - 1);  
    }

    for (long long timeB = 0; timeB < cycle; timeB += b) {
        long long visibleFromA = countInRange(a, max(0LL, timeB - m), timeB + m);
        long long visibleFromB = countInRange(b, max(0LL, timeB - m), timeB + m);
        maxVisible = max(maxVisible, visibleFromA + visibleFromB - 1);  
    }

    return maxVisible;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, m;
        cin >> a >> b >> m;
        cout << maxVisible(a, b, m) << endl;
    }
    return 0;
}
