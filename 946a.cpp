#include <iostream>
using namespace std;

int main() {
   
    tst {
        int k, x, n;
        cin >> k >> x >> n;

        int loss = 1;
        bool f = true;
        for (int i = 2; i <= x; i++) {
            int z = 1+loss / (k - 1);
            while ((z * (k - 1)) <= loss) {
                z++;
            }
            loss += z;
            if (loss >= n) {
                f = false;
            }
        }

        int left = n - loss;
        int after = k * left;
        if (after > n && f) {
            cout << "Yes" << endl;
            continue;
        }
        else {
            cout << "No" << endl;
            continue;
        }
    }
    return 0;
}