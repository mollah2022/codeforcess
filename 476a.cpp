#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST  
              int n,m; cin >> n >> m;
              //int count  = 0;
              if(m>n){
                  cout << -1 << endl;
                  return 0;
              }
              int p = n-1;
              int ans = (p/m);
              int ans1 = p%m;
              cout << ans1+ans+1 << endl; 
     return 0;
}