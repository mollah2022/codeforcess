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
                int n; cin >> n;
                int m = (n*2);
                vector<int>v1;
                for(int i=0;i<m;i++){
                      int y; cin >> y;
                      v1.push_back(y);
                }
                ll ans = 0,mx = 0;
                for(int i=0;i<v1.size();i=i+2){
                          ll mx = min(v1[i],v1[i+1]);
                           ans+=mx;      
                }
                cout << ans << endl;
            }
  return 0;
}