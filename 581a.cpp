//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
            int n,m; cin >> n >> m;
            int mx = max(n,m);
            int mn = min(n,m);
            cout << mn << " ";
            mx = mx - mn;
            cout << mx/2 << endl;
  return 0;
}