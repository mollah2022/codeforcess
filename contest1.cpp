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
                       int a,b; cin >> a >> b;
                       int ans1 =0,ans2=0;
                       for(int i=a;i<=b;i++){
                           if(i%2==0){
                               ans1+=i;
                           }
                           else{
                               ans2+=i;
                           }
                       }
                      // cout << ans1 <<" " << ans2 << endl;
                       cout << (ans1-ans2)<< endl;
                }
  return 0;
}