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
             tst{
                    ll n; cin >> n;
                    ll two = 0;
                    ll three = 0;
                    if(n==1){
                         cout << 0 << endl;
                         continue;
                    }
                    for(int i=2;i<=n;i++){
                          if(i%2==0){
                               two+=i;
                          }
                          else if(i%3==0){
                              three+=i;
                          }
                    }
                   // cout << two <<" "<<three<<endl;
                    if(two > three){
                           cout << 2 << endl;
                    }
                    else {
                           cout << 3 << endl;
                    }
             }
  return 0;
}