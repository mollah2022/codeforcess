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
                         int x = abs(n-1);
                         int y = abs(m-k);
                         int z = abs(k-1);
                         int p = y+z;
                         if(x<p){
                               cout <<"1\n";
                         }
                         else if(x>p){
                              cout <<"2\n";
                         }
                         else{
                               cout <<"3\n";
                         }
               }
  return 0;
}