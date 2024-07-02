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
                 int a1[3];
                 for(int i=0;i<3;i++){
                       cin >> a1[i];
                 }
                 sort(a1,a1+3);
                 int cnt = 0;
                 for(int i=0;i<2;i++){
                      cnt +=abs(a1[i]-a1[i+1]);
                 }
                 cout << cnt << endl;
  return 0;
}