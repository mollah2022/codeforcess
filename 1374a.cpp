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
              tst {
                int x, y, n;
                   cin >> x >> y >> n;
                  // cout <<  n - n % x + y << endl;
                    if (n - n % x + y <= n) {
                         cout << n - n % x + y << endl;
                      } 
                      else {
                                 cout << n - n % x - (x - y) << endl;
                          }
    }
  return 0;
}