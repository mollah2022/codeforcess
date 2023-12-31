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
                 int n; cin >> n;
                 string s1; cin >> s1;
                 int x=0,y=0;
                 bool ria  = false;
                 for(int i=0;i<s1.size();i++){
                       if(s1[i]=='U'){
                           y++;
                           if(x==1 && y==1){
                              cout <<"YES\n";
                              ria = true;
                              break;
                           }
                       }
                       else if(s1[i]=='D'){
                          y--;
                          if(x==1 && y==1){
                              cout <<"YES\n";
                               ria = true;
                              break;
                           }
                       }
                       else if(s1[i]=='R'){
                          x++;
                          if(x==1 && y==1){
                              cout <<"YES\n";
                               ria = true;
                              break;
                           }
                       }
                       else if(s1[i]=='L'){
                          x--;
                          if(x==1 && y==1){
                              cout <<"YES\n";
                               ria = true;
                              break;
                           }
                       }
                 }
                if(ria == 0){
                    no
                }
            }      
     return 0;
}