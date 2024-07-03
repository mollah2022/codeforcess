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
                 int n; cin >> n;
                 if(n>=0){
                       cout << n << endl;
                       return 0;
                 }
                         int a = n / 10;
                      int b = n / 100 * 10 + n % 10;
                          cout << max(a, b) << endl;
                        //  cout << a <<" " << b << endl;
  return 0;
}