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
             int n,m; cin >> n >> m;
             while(m--){
                       if(n%10==0){
                            n = n/10;
                       }
                       else{
                           n=n-1;
                       }
             }
             cout << n << endl;
  return 0;
}