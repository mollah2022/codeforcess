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
            int n,k,l,c,d,p,nl,np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
            int x = (k*l);
            int y = (c*d);
            int z = (p/np);
            int x1 = x/nl;
            int mn = min({x1,y,z});
            cout << mn/n << endl;
  return 0;
}