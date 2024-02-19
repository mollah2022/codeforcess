#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
           int n; cin >> n;
           int a1[n];
           int a2[n];
           ll sum = 0;
           for(int i=0;i<n;i++){
                cin >> a1[i];
                sum+=a1[i];
           }
           for(int i=0;i<n;i++){
                cin >> a2[i];
           }
           sort(a2,a2+n,greater<int>());
           ll ans = a2[0]+a2[1];
           if(ans<sum){
               no
           }
           else{
              yes
           }

  return 0;
}