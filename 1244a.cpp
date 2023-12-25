#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                 int a,b,c,d,e;
                 cin >> a >> b >> c >> d >> e;
                 double x = ceil((double)a/c);
                 double y = ceil((double)b/d);
                 int k = (x+y);
                 if(k>e){
                       cout << -1 << endl;
                 }
                 else{
                        cout << x << " " << y << endl;
                 }
             }
    return 0;
}