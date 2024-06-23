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
                      int a,b; cin >> a >> b;
                      if(a%b==0){
                           cout << 0 << endl;
                           continue;
                      }
                     int m = a/b+1;
                     int n = m*b;
                     cout << n-a << endl;
              }
  return 0;
}