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
            int count = 0;
            while(n<=m){
                   count++;
                   n*=3;
                   m*=2;
            }
            cout << count << endl;
  return 0;
}