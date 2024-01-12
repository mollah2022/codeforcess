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
             int a1[n],a2[n];
            int sum1=0,sum2=0;
            for(int i=0;i<n;i++){
                cin >> a1[i];
                  sum1+=a1[i];
            }  
            for(int i=0;i<n;i++){
                  cin >> a2[i];
                  sum2+=a2[i];
            }  
            //cout << sum1 <<" " << sum2 << endl;
            if(sum2>sum1){
                  no
            }
            else{
                yes
            }
     return 0;
}