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
                int a,b,c; cin >> a >> b >> c;
                if(a==b){
                        cout << c << endl;
                }
                else if(a==c){
                        cout << b << endl;
                }
                else{
                        cout << a << endl;
                }
          }
           
     return 0;
}