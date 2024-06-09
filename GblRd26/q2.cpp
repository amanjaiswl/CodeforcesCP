#include <iostream>
#include <string>

bool solve(const std::string& x) {
    if (x == "10") return true;

    if (x.back() == '9') return false;

    if (x.length() == 2 && x[1] == '0') return false;

    if (x.length() >= 3 && x[1] == '0') return false;

    if (x.length() >= 3) {
        int firstTwo = (x[0] - '0') * 10 + (x[1] - '0');
          firstTwo--;
        if (!((firstTwo >= 10 && firstTwo <= 18) || (firstTwo >= 55 && firstTwo <= 99))) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string x;
        std::cin >> x;
        std::cout << (solve(x) ? "YES" : "NO") << std::endl;
    }
    return 0;
}
