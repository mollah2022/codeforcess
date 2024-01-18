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
                  ll n,m,x; cin >> n >> m >> x;
                  x--;
                  ll col = x/n;
                  ll row = x%n;
                  cout << row*m+col+1 << endl;
            }    
     return 0;
}