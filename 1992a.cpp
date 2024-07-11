#include <iostream>
#include <algorithm>

using namespace std;

int main() {
            int n; cin >> n;
            while(n--){
                    int a, b, c;
    cin >> a >> b >> c;
    
    int operations = 5;

    for (int i = 0; i < operations; ++i) {

        if (a <= b && a <= c) {
            ++a; 
        } else if (b <= a && b <= c) {
            ++b;
        } else {
            ++c;
        }
    }
    int maxProduct = a * b * c;
    
    cout << maxProduct << endl;
    
            }
    return 0;
}

