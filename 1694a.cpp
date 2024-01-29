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
                   int n,m; cin >> n >> m;
                   for(int i=0;i<min(n,m);i++){
                         cout <<"01";
                   }
                   for(int i=0;i<abs(n-m);i++){
                         if(n>m){
                               cout <<"0";
                         }
                         else{
                             cout << "1";
                         }
                   }
                   cout << endl;
              }   
     return 0;
}