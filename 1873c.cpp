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
                     int n = 10;
                     std::vector<int> v1;
                     while(n--){
                            string s1; cin >> s1;
                            for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='X'){
                                        v1.push_back(i+1);
                                   }
                            }
                     }
                       ll ans = 0;
                     sort(v1.begin(),v1.end());
                     for(int i=0;i<v1.size();i++){

                          if(v1[i]==10){
                              ans+=1;
                          }
                          else if(v1[i]==9){
                              ans+=2;
                          }
                          else if(v1[i]==8){
                             ans+=3;
                          }
                          else if(v1[i]==7){
                             ans+=4;
                          }
                          else if(v1[i]==6){
                             ans+=5;
                          }
                          else{
                              ans+=v1[i];
                          }
                     }
                     cout << ans << endl;
             }
  return 0;
}