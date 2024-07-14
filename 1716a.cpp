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
                       int a = 0, b = 0;
                       if(n==1){
                           cout << 2 << endl;
                           continue;
                       }
                         if(n%3==0){
                              a +=(n/3);
                              cout << a << endl;
                              //continue;

                         }
                         else {
                                  b +=(n+2)/3;
                                  cout << b << endl;
                                  //continue;
                         }
                }
  return 0;
}