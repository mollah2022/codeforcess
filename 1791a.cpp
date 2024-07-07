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
                     int n; cin >> n;
                     string s1; cin >> s1;
                  //   sort(s1.begin(),s1.end());
                     int u=0,d=0,r=0,l=0;
                     bool find = false;
                     for(int i=0;i<s1.size();i++){

                               if(s1[i]=='U'){
                                  u++;
                               }
                               else if(s1[i]=='D'){
                                  u--;
                               }
                              else  if(s1[i]=='R'){
                                   r++;
                               }
                               else if(s1[i]=='L'){
                                   r--;
                               }

                                 if(u==1 && r==1){
                                   find = true;
                                    break;
                               }
                               
                     }
                     //cout << u <<" "<< r << endl;
                     if(find == true){
                          yes
                     }
                     else{
                           no
                     }
            }
                   
  return 0;
}