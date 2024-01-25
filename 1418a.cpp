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
                   ll s,c,k; cin >> s >> c >> k;
                   ll cola = c*k;
                   ll total = cola+(k-1);
                   ll s1 = s-1;
                   long double ans = ceil((long double)total/s1);
                   ll result = (ans+k);
                   cout << result << endl;
             }  
     return 0;
}