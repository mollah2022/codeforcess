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
              int n; cin >> n;
              int a1[3];
              for(int i=0;i<3;i++){
                     cin >> a1[i];
              }
               sort(a1,a1+3);
              int mx = INT_MIN;
              if(n%a1[0]==0){
                   int cnt1 = n/a1[0];
                   mx = max(cnt1,mx);
              }
              else if(n%a1[1]==0){
                   int cnt2 = n/a1[1];
                   mx = max(cnt2,mx);
              }
              else if(n%a1[2]==0){
                      int cnt3 = n/a1[2];
                      mx = max(mx,cnt3);
              }
      //  cout << mx << endl;
              int cnt = 0;
              while(n>0){
                       if(n>=a1[2]){
                            cnt = n/a1[1];
                            n  = n %a1[1];
                       }
                       else if(n>=a1[1]){
                            cnt = n - a1[1];
                           n = n %a1[1];
                       }
                       else if(n>=a1[0]){
                             cnt=n/a1[0];
                            n = n%a1[0];
                       }
              }
              cout << max(mx,cnt) << endl;
  return 0;
}