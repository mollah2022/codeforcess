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
                   int a,b; cin >> a >> b;
                   int mn = min(a,b);
                   int mx = max(a,b);
                   mx = mx-mn;
                      if(mx%10==0){
                        cout << mx/10 << endl;
                     }
                     else{
                           cout << (mx/10)+1 << endl;
                     }
              }
  return 0;
}