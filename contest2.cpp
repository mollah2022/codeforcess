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
                    ll n,m; cin >> n >> m;
                    ll ans1 = (4*n)-2;
                    ll ans2 = (m/2)+1;
                    ll ans3 = (m/2);
                     if(m==ans1){
                          cout << ans2 << endl;
                    }
                    else if(m%2==0){
                           cout << ans3 << endl;
                    }
                    else{
                        cout << ans2 << endl;
                    }
              }   
     return 0;
}