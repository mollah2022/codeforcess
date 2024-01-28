#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST  
              ll a,b,c,d,e; cin >> a >> b >> c >> d >> e;
              ll ans = (a+b+c+d+e);
              if(ans<5){
                   cout << "-1" << endl;
              }
             else if(ans%5==0){
                   cout << ans/5 << endl;
              } 
              else{
                    cout <<"-1\n";
              }
     return 0;
}