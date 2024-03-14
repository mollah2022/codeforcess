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
                  int a,b,l; cin >> a >> b >> l;
                  int count = 0;
                     ll ans = 1;
                      for(int j=0;j<=l;j++){
                          for(int k=0;k<=l;k++){
                        ll ans = ((pow(a,j))*(pow(b,k)));
                               if(ans == l){
                                   count++;
                               }
                               else{
                                  ans = 1;
                               }
                          }
                      }
                  cout << count << endl;
            }
  return 0;
}