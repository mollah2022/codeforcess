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
               ll a1,a2,a3,a4; cin >> a1 >> a2 >> a3 >> a4;
               string s1; cin >> s1;
               ll ans = 0;
               for(int i=0;i<s1.size();i++){
                     int a = s1[i]-'0';
                     if(a==1){
                          ans+=a1;
                     }
                     else if(a==2){
                        ans+=a2;
                     }
                     else if(a==3){
                          ans+=a3;
                     }
                     else if(a==4){
                           ans+=a4;
                     }
               }
               cout << ans << endl;
  return 0;
}