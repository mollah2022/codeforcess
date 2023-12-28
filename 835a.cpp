#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
        FAST
            int x,a,b,c,d; cin >> x >> a >> b >> c >> d;
            ll result1 = (x*a)+(c*2);
            ll result2 = (x*b)+(d*2);
            if(result1<result2){
                  cout <<"First\n";
            }
            else if(result1 == result2){
                  cout <<"Friendship\n";
            }
            else{
                 cout <<"Second\n";
            }    
     return 0;
}