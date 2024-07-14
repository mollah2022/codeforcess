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
                        ll a,b,c,n,m; cin >> a >> b >> c >> n >> m;
                        ll r1 = 0,r2 = 0;
                        if(a<n){
                               r1 = n-a;
                        }
                        if(b<m){
                             r2 = m-b;
                        }
                        if((r1+r2)<=c){
                               cout <<"YES\n";
                        }
                        else{
                              cout <<"NO\n";
                        }
                }
  return 0;
}