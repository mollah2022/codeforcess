#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
             tst{
                  int a,b,c; cin >> a >> b >> c;
                 int ans1 = max(a,b);
                 int ans2 = max(ans1,c);
                  cout << ans2+1 << endl;
             }     
     return 0;
}