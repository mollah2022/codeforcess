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
             int find1 = 0,find2 = 0;
              tst{
                     int n,m; cin >> n >> m;
                     if(n>m){
                           find1 = 1;
                     }
                     else if(m>n){
                          find2 = 1;
                     }
              }
              if(find1==1 && find2==1){
                   cout <<"Happy Alex\n";
              }
              else{
                    cout <<"Poor Alex\n";
              }
  return 0;
}