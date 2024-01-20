#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
          ll sum1=0;
          ll sum2=0;
            tst{
                  int a,b; cin >> a >> b;
                       sum1 +=a;
                   sum2 +=b;
            } 
             if(sum1==sum2){
                       cout <<"Draw\n";
                  }
                  else if (sum1>sum2){
                      cout <<"Takahashi\n";
                  }
                  else{
                      cout <<"Aoki\n";
                  }
     return 0;
}