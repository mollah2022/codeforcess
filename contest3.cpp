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
                ll n; cin >> n;
                ll a1[n];
                ll sum = 0;
                for(ll i=0;i<n;i++){
                        cin >> a1[i];
                        sum+=a1[i];
                }
                ll ans = sqrt(sum);
                //cout << ans << endl;
                if((ans*ans)==sum){
                        cout <<"YES\n";
                }
                else{
                        cout <<"NO\n";
                }
           }
           
     return 0;
}