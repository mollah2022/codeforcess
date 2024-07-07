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
                     if(n<m && m<k){
                          cout <<"STAIR\n";
                     }
                     else if(n<m && m>k){
                           cout <<"PEAK\n";
                     }
                     else{
                        cout <<"NONE\n";
                     }
              }
  return 0;
}