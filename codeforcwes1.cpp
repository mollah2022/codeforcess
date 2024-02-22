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
                   ll n; cin >> n;
                   ll m = (n%9);
                   ll h = (n/10);
                    ll ans = (h*45);
                   ll result = ans+((m*(m+1))/2);
                     cout << result << endl;
            }
  return 0;
}