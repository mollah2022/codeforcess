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
                        int n = 4;
                        int mn = INT_MAX;
                        int mx = INT_MIN;
                               int a1,b1,a2,b2,a3,b3,a4,b4;
                               cin >> a1 >> b1 >> a2 >> b2;
                               cin >> a3 >> b3 >> a4 >> b4;
                               int ans = 0;
                               if(a1==a3){
                                      ans = abs(b1-b3);
                               }
                               else{
                                       ans = abs(a1-a3);
                               }
                               if(a2==a4){
                                   ans = abs(b2-b4);
                               }
                               else{
                                    ans = abs(a2-a4);
                               }
                               cout << ans*ans << endl;
               }
  return 0;
}