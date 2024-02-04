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
                  int n,m,k; cin >> n >> m >> k;
                  int sum1 = max({n,m,k});
                  int sum2 = (n+m+k)-sum1;
                  if((sum1-sum2)<2){
                       cout <<"Yes\n";
                  }
                  else{
                       cout << "No\n";
                  }
                  //cout << sum1-sum2<<endl;
            }  
     return 0;
}