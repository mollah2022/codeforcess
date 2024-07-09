//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
               tst{
                        int a,b,c; cin >> a >> b >> c;
                        int ans = 0,ans1 = 0,ans2=0;
                        int x = ceil((double)c/2);
                      if(x>b){
                           cout <<(a*b)<<endl;
                      }
                      else{
                             ans1 += a/2;
                             ans2 += a-(ans1*2);
                              ans = ans + ((a/2)*c)+(ans2*b);
                              cout << ans << endl;
                      }
               }
  return 0;
}