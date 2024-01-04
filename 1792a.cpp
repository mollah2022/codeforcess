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
                int a1[n];
                for(int i=0;i<n;i++){
                      cin >> a1[i];
                }
                //sort(a1,a1+n);
                int mx = INT_MIN;
                int mn = INT_MAX;
                for(int i=0;i<n;i++){
                      mx = max(mx,a1[i]);
                      mn = min(mn,a1[i]);
                }
                int sm = 0,sn = 0;
                for(int i=0;i<n;i++){
                      if(mn==a1[i]){
                         sn++;
                      }
                      if(mx==a1[i]){
                        sm++;
                      }
                }
                //cout << (sm-sn)+1 << endl;
                if(sn==sm){
                    cout << ((sm*mx)-(sn*mn))+1 << endl;
                }
                else{
                    cout << (mx-mn)+1 << endl;
                }

            }      
     return 0;
}