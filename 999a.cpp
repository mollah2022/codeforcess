#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    int ans = 0;
    while (!a.empty() && a.back() <= k) {
        ++ans;
        a.pop_back();
    }
    reverse(a.begin(), a.end());
    while (!a.empty() && a.back() <= k) {
        ++ans;
        a.pop_back();
    }
    
    cout << ans << endl;
    
    return 0;
}