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
                   int n; cin >> n;
                   string s1; cin >> s1;
                   string s2 = "";
                     int one1=0,zero1=0;
                    for(int i=0;i<s1.size();i++){
                       if(s1[i]=='1'){
                        one1++;
                       }
                       else{
                           zero1++;
                       }
                   }
                     if(zero1>one1){
                           yes
                           continue;
                     }

                   for(int i=0;i<s1.size();i++){
                        if(s1[i]=='1'){
                              s2+='1';
                              s2+='0';
                        }
                        else if(s1[i]!=s1[i+1]){
                               s2+='0';
                        }
                   }
                   int one = 0,zero = 0;
                   for(int i=0;i<s2.size();i++){
                       if(s2[i]=='1'){
                        one++;
                       }
                       else{
                           zero++;
                       }
                   }
                   cout << zero << endl;
                   if(zero>one){
                      yes
                   }
                   else{
                      no
                   }

              }  
     return 0;
}