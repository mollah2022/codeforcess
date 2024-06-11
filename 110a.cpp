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
           ll n; cin >> n;
           ll cnt = 0;
           while(n>0){
                   if(n%10==4 || n%10==7){
                      cnt++;
                   }
                   n = n/10;
           }
           if(cnt==4 || cnt==7){
               yes
           }
           else{
                no
           }
  return 0;
}