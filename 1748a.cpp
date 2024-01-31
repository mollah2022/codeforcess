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
                 ll n; cin >> n;
                 if(n%2==0){
                       cout << n/2 << endl;
                 }
                 else{
                   ll m = ceil((double)n/2);
                    cout << m << endl;
                 }
            }   
     return 0;
}