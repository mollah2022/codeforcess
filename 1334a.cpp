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
                    ll n; cin >> n;
                    if(n<=2){
                           cout << 0 << endl;
                           continue;
                    }
                    if(n%2==0){
                           cout << (n/2)-1 << endl;
                    }
                    else{
                           cout << (n/2) << endl;
                    }
               }
  return 0;
}