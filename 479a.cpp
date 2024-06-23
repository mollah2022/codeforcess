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
           int a,b,c; cin >> a >> b >> c;
           int x = a+b*c;
           int y = a*(b+c);
           int z = a*b*c;
           int k = (a+b)*c;
           int p = (a+b+c);
           int mx = max({x,y,z,k,p});
           cout << mx << endl;
  return 0;
}