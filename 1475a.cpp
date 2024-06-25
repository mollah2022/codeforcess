//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

ll check(ll n){
         ll n = n%10;
         if(n%2==0){
               return false;
         }
         else{
                return true;
         }
}

int32_t main(){
           FAST()
            tst{
                    ll n; cin >> n;
                    if(n%3==0 || n%5==0 || n%7==0||n%9==0){
                           cout <<"YES\n";
                           continue;
                    }
                    if(check(n)==true) cout <<"YES\n";
                    else cout << "NO\n";
            }
  return 0;
}