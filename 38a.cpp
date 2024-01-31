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
               int m = n-1;
               int a1[m];
               for(int i=0;i<m;i++){
                   cin >> a1[i];
               } 
               int a,b; cin >> a >> b;
               ll sum = 0;
               for(int i=a-1;i<b-1;i++){
                    sum+=a1[i];
               }
               cout << sum << endl;
     return 0;
}