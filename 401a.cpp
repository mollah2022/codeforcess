#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
                  int n,m; cin >> n >> m;
                  int a1[n];
                  int sum = 0;
                  for(int i=0;i<n;i++){
                        cin >> a1[i];
                        sum+=(a1[i]);
                  }
                  //cout << sum << endl;
                  int ans = abs(sum)/m;
                  if(sum%m!=0){
                      ans++;
                  }
                cout << ans << endl;  
     return 0;
}