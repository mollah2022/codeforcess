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
              ll  n; cin >> n;
              ll sum = 0;
              ll p=0,q=0,ans=0,ans1=0;
              if(n%2!=0){
                    p = n/2+1;
                    q = n/2;
                     ans = p*p;
                    ans1 = q*(q+1);
                    cout << ans1-ans << endl;
              }
              else{
                          p = n/2;
                     ans = p*p;
                     ans1 = p*(p+1);
                     cout << ans1-ans << endl;
              }
            //cout << ans << " " << ans1 << endl;
  return 0;
}