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
               int n,m; cin >> n >> m;
               int min = 240-m;
               //cout << min/5 << endl;
               int cnt = 0,a=0;
               for(int i=1;i<=n;i++){
                         a = a+ (5*i);
                         if(a<=min){
                              cnt++;
                         }
                         else{
                             break;
                         }
                       //  cout <<a << endl;
               }
               cout << cnt << endl;
  return 0;
}