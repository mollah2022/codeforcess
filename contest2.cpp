#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST  
             tst{
             int x; cin >> x;
    int n; cin >> n;
    int ans = 1;
    for (int i = 1; i * i <= x ; i++) {
        if (x % i == 0) {
            if (i >= n) {
                ans = max(ans, x / i);
            }
            if (x / i >= n) {
                ans = max(ans, i);
            }
        }
    }
    cout << ans << endl; 
 }
     return 0;
}