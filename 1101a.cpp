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
                  int ans = 0;
                int n,m,k; cin >> n >> m >> k;

                 if(k<n){
                      ans = k;
                 }
                 else if(k<=m){
                      int temp = m/k;
                      temp++;
                      ans = (k*temp);
                 }
                 else if(k>m){
                    ans = k;
                 }
             cout << ans << endl;
             }  
     return 0;
}