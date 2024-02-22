#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
           ll result = 0;
            ll n,m; cin >> n >> m;
            ll a,b,c; cin >> a >> b >> c;
            ll y = (a*2);
            if(n>=y){
                n=n-y;
            }
            else{
                 result+=y-n;
                 n=0;
            }
             ll bl = (c*3);
            if(m>=bl){
                m=m-bl;
            }
            else{
                 result+=bl-m;
                 m=0;
            }
           // cout << n <<" "<<m<<endl;
           // cout << result << endl;
            if(n<b){
                result+=b-n;
            }
            if(m<b){
                result+=b-m;
            }
cout << result << endl;
  return 0;
}