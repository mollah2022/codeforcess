#include<bits/stdc++.h>
using namespace std;

int solve(string in, string ky) {
    int n = in.length();
    int m = ky.length();
    int min_moves = INT_MAX;

    for (int i = 0; i <= n - m; i++) {
        int mv = 0;
        for (int j = 0; j < m; j++) {
            int diff = abs(in[i + j] - ky[j]);
            int cyclic_diff = min(diff, 10 - diff);
            mv += cyclic_diff;
        }
        min_moves = min(min_moves, mv);
    }

    return min_moves;
}

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n, m;
        cin >> n >> m; 
        string in, ky;
        cin>>in;
        cin>>ky;
        int res = solve(in, ky);
        cout << res << endl;
    }

    return 0;
}