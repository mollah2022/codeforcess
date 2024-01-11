#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
                  int a,b,c,d; cin >> a >> b >> c >> d;
                  int x = (a+b);
                  int y = (c+d);
                  int x1 = (a+c);
                  int y1 = (b+d);
                  int x2 = (a+d);
                  int y2 = (b+c);
                  int p1 = (b+c+d);//a
                  int p2 = (a+c+d);//b
                  int p3 = (a+b+d);//c
                  int p4 = (a+b+c);//d
                  if(x==y || x1==y1 || x2==y2){
                       cout <<"YES\n";
                  }
                  else if(p1==a || p2==b || p3==c || p4==d){
                      cout <<"YES\n";
                  }
                  else{
                        cout <<"NO\n";
                  }   
     return 0;
}