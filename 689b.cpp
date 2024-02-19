#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
             long long a, b;
           cin >> a >> b;
          long long ans = 1;
       for (long long i = a + 1; i <= b; i++) {
            ans = (ans % 10) * (i % 10);
             if (ans % 10 == 0) {
             break;
    }
  }
  cout << ans % 10 << endl;
  return 0;
}