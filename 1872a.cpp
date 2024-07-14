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
                       int n,m,k; cin >> n >> m >> k;
                       int mn = min(n,m);
                       int r = (n+m);
                       int rn = ceil((double)r/2);
                            rn = (rn-mn);
                       if(rn%k==0){
                            cout << rn/k << endl;
                       }
                       else{
                            cout << (rn/k)+1 << endl;
                       }
               }
  return 0;
}