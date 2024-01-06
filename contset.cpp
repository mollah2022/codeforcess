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
                 int n,m; cin >> n >> m;
                 ll sum = 0;
                 sum+=(n+m);
                 if(sum%2==0){
                      cout <<"Bob\n";
                 }
                 else{
                     cout <<"Alice\n";
                 }
             }     
     return 0;
}