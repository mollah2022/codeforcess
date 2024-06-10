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
             ll sum = 0;
             vector<int>v1;
             ll ans = 0;
             int x1=0,y1=0,z1=0;
             tst{
                     int x,y,z; cin >> x >> y >> z;
                     x1+=x;
                     y1+=y;
                     z1+=z;
             }
             if(x1==0 && y1==0 && z1==0){
                 yes
             }
             else{
                no
             }
             //cout << sum << endl;
  return 0;
}