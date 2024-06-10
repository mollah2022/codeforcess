//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
             ll n,m,k; cin >> n >> m >> k;
             if(k==1 && m>=n){
                  cout << 0 << endl;
                  return 0;
             }
             ll sum = n+(2*n);
            // k = k - 2;
             for(int i=3;i<=k;i++){
                   sum = sum + (i*n);
             }
            if(sum>m) cout << sum - m << endl;
            else cout << 0 << endl;
  return 0;
}