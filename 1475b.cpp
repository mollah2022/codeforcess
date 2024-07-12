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
                     ll n; cin >> n;
                     //bool ans = false;
                     if(n%2020==0 || n%2021==0){
                           cout <<"YES\n";
                           continue;
                     }
                     else if(n<2020){
                          cout <<"NO\n";
                          continue;
                     }
                   ll ans = n%2020;
                   ll ans1 = n/2020;
                     if(ans<=ans1){
                           cout <<"YES\n";
                     }
                     else{
                           cout <<"NO\n";
                     }
              }
  return 0;
}