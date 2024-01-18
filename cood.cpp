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
                int x1,y1,x2,y2,x3,y3,x4,y4;
                cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
               int a = (x1-x2)*(x1-x2);
               int b = (y1-y2)*(y1-y2);
               int ans = (a+b);

               int c = (x1-x3)*(x1-x3);
               int d = (y1-y3)*(y1-y3);
               int ans1 = (c+d);

               cout << min(ans,ans1) << endl;

             }     
     return 0;
}