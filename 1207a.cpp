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
                  int b,p,f; cin >> b >> p >> f;
                  int h,c; cin >> h >> c;
                  int a = b/2;
                  int ans1=0,ans2=0;
                   if(h>=c){
                          if(a>=p){
                                ans1+=(p*h);
                                int g = a-p;
                                if(g>=f){
                                    ans1+=(f*c);
                                }
                                else{
                                    ans1+=(g*c);
                                }
                          }
                          else{
                              ans1+=(a*h);
                          }
                   }
                   else{
                          if(a>=f){
                               ans2+=(f*c);
                               int r = a-f;
                               if(p<=r){
                                   ans2+=(p*h);
                               }
                               else{
                                  ans2+=(h*r);
                               }
                          }
                          else{
                             ans2+=(a*c);
                          }
                   }
                   cout << (ans1+ans2) << endl;

            }    
     return 0;
}