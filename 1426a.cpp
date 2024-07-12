//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
               tst{
                     int n,m; cin >> n >> m;
                     n = n - 2;
                       if(n<=0){
                           cout << 1 << endl;
                           continue;
                       }
                     int cnt = 1;
                     if(n%m==0){
                          cnt +=(n/m);
                     }
                     else{
                           cnt +=(n/m)+1;
                     }
                     cout << cnt << endl;
               }
  return 0;
}