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
                int n,m; cin >> n >> m;
                int ans = (n*m);
                    int ans2 = ceil((double)ans/3);
                    cout << ans2 << endl;
            }
  return 0;
}