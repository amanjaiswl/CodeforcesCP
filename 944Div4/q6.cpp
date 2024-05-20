// right answer but time limit exceeded on test 5.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r;

        int count = 0;
        int r_squared = r * r;
        int r1_squared = (r + 1) * (r + 1);

        for (int x = -r-1; x <= r+1; ++x) {
            for (int y = -r-1; y <= r+1; ++y) {
                int distance_squared = x * x + y * y;
                if (distance_squared >= r_squared && distance_squared < r1_squared) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}

// the right answer , i mean better more optimised is below
/*
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r;

        int count = 0;
        int r_squared = r * r;
        int r1_squared = (r + 1) * (r + 1);
        int height = r + 1;

        for (int x = 0; x <= r + 1; ++x) {
            while (height > 0 && x * x + height * height >= r1_squared) {
                height--;
            }
            int y = height;
            while (y > 0 && x * x + y * y >= r_squared) {
                count++;
                y--;
            }
        }

        cout << count * 4 << endl;
    }
    return 0;
}
*/

