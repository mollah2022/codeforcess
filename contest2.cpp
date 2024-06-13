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
                   long long n; cin >> n;
                   long long a1[n];
                   for(int i=0;i<n;i++) {
                        cin >> a1[i];
                   }
                    if(n==1 && a1[0]==1){
                          cout << 0 << endl;
                          continue;
                    }
                    if(n==1 && a1[0]==0){
                          cout << 1 << endl;
                          continue;
                    }
                    //sort(a1,a1+n);
                    ll sum = 0;
                    ll cnt  = 0;
                for(int i=0;i<2;i++){
                       sum+=a1[i];
                       cnt++;
                       ll x = a1[i+1];
                       if(sum == x && sum!=1){
                              break;
                       }
                }
                cout << cnt << endl;
               // cout << sum << endl;
             }
  return 0;
}