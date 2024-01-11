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
                   int n; cin >> n;
                   int mx = INT_MIN;
                   int m;
                   for(int i=1;i<=n;i++){
                       cin >> m;
                       mx = max(mx,m-i);
                   }
                   cout << mx << endl;
            }    
     return 0;
}