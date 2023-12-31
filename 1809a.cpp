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
                 char a,b,c,d; cin >> a >> b >> c >> d;
                 if(a==b&&b==c&&c==d){
                      cout <<-1<<endl;
                      continue;
                 }
                 if(a==b&&a==c||a==c&&a==d||a==b&&a==d ||
                     b==a&&b==c||b==c&&b==d||b==a&&b==d||
                     c==a&&c==b||c==b&&c==d||c==a&&c==d||
                     d==a && d==b||d==b&&d==c||d==a&&d==c){
                      cout << 6 << endl;
                 }
                 else{
                    cout << 4 << endl;
                 }
            }     
     return 0;
}