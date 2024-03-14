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
                  int n; cin >> n;
                  int a1[n];
                  ll sum = 0;
                  ll ans = 0;
                  for(int i=0;i<n;i++){
                         cin >> a1[i];
                         if(a1[i]>0){
                            sum+=a1[i];
                         }
                         else{
                             ans+=a1[i];
                         }
                  }
                  cout << sum-ans << endl;
            }
  return 0;
}