#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            tst{
                  ll n,m; cin >> n >> m;
                  ll a1[n],a2[m];
                  ll sum1=0,sum2=0;
                  for(int i=0;i<n;i++){
                      cin >> a1[i];
                      sum1+=a1[i];
                  }
                   for(int i=0;i<m;i++){
                      cin >> a2[i];
                      sum2+=a2[i];
                  }
                  if(sum1==sum2){
                    cout <<"Draw\n";
                  }
                  else if (sum1 > sum2){
                      cout <<"Tsondu\n";
                  }
                  else{
                      cout << "Tenzing\n";
                  }
            }     
     return 0;
}