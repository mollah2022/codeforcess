#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            int n,m,r; cin >> n >> m >> r;
            int a1[n],a2[m];
             int mx1=INT_MAX;
            for(int i=0;i<n;i++){
                   cin >> a1[i];
                   mx1 = min(mx1,a1[i]);
            }
             int mx2=0;
            for(int i=0;i<m;i++){
                   cin >> a2[i];
                   mx2 = max(mx2,a2[i]);
            }
              if(mx1>=mx2){
                   cout << r << endl;
              }
              else{
                 int p=r/mx1;
            int rem = r%mx1;
            int ans = (p*mx2)+rem;
            cout << ans << endl;
            
            }
     return 0;
}