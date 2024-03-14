#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
            ll a,b,c; cin >> a >> b >> c;
            ll a1 = a+c;
            ll b1 = b+c;
            if(a1==b1){
                cout << a1+b1 << endl;
            }
            else {
                  ll ans =  min(a1,b1);
                  cout << (2*ans)+1 << endl;
            }
  return 0;
}