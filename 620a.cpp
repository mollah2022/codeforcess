#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            int x1,x2; cin >> x1 >> x2;
            int y1,y2; cin >> y1 >> y2;
            int mn = abs(x1-y1);
            int mx = abs(x2-y2); 
            cout << max(mn,mx) << endl;   
     return 0;
}