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
            ll n,m; cin >> n >> m;
            ll div = (n+1)/2;
             if(m<=div){
                   cout << (m*2)-1 << endl;
             }
             else{
                   cout << (m-div)*2 << endl;
             }

  return 0;
}