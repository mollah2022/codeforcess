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
                     int n; cin >> n;
                     if(n%7==0){
                          cout << n << endl;
                     }
                     else{
                              n = n/7+1;
                              cout << (n*7) << endl;
                     }
              }
  return 0;
}