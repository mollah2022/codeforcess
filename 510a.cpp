#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST 
               ll a,b,c,d; cin >> a >> b >> c >> d;
               ll a1 = (3*a)/10;
               ll a2 = (a-(a*c)/250);

               ll m = max(a1,a2);

               ll b1 = (3*b)/10;
               ll b2 = (b-(b*d)/250);

               ll v = max(b1,b2);
               if(m>v){
                     cout <<"Misha\n";
               }  
               else if(v>m){
                    cout <<"Vasya\n";
               }
               else{
                    cout << "Tie\n";
               }
     return 0;
}