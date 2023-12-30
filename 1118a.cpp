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
                ll n,a,b; cin >> n >> a >> b;
                ll x = ceil((double)b/2);
                if(x>a){
                    cout << n*a << endl;
                }
                else{
                      if(n%2!=0){
                        ll rem = n/2;
                      ll ans = (rem*b)+a;
                      cout <<ans<< endl;
                      }
                      else{
                          ll rem = n/2;
                      ll ans = (rem*b);
                      cout <<ans<< endl;
                      }
                }
            }    
     return 0;
}