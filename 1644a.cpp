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
                   string s1; cin >> s1;
                   int l = s1.size()-1;
                   vector<int>v1,v2;
                   if(s1[0]=='B' || s1[0]=='R'||s1[0]=='G'){
                         no
                         continue;
                   }
                   else if(s1[l]=='b' || s1[l]=='r'||s1[l]=='g'){
                      no
                      continue;
                   }
                  

                   for(int i=0;i<s1.size();i++){
                       if(s1[i]=='R'){
                            v1.push_back(i);
                       }
                       else if(s1[i]=='r'){
                           v2.push_back(i);
                       }
                   }

                   for(int i=0;i<s1.size();i++){
                       if(s1[i]=='G'){
                            v1.push_back(i);
                       }
                       else if(s1[i]=='g'){
                           v2.push_back(i);
                       }
                   }

                   for(int i=0;i<s1.size();i++){
                       if(s1[i]=='B'){
                            v1.push_back(i);
                       }
                       else if(s1[i]=='b'){
                           v2.push_back(i);
                       }
                   }

                   if(v2[0]>v1[0] || v2[1]>v1[1] || v2[2]>v1[2]){
                       no
                   }
                   else{
                       yes
                   }
             } 
     return 0;
}