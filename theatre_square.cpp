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
               ll n,m,a; cin >> n >> m >> a;
               ll x = ceil((double)n/a);
               ll y = ceil((double)m/a);
               cout << x*y << endl;
  return 0;
}