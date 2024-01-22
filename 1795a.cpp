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
               int n,m ; cin >> n >> m;
               string s1,s2; cin >> s1 >> s2;
               reverse(s2.begin(),s2.end());
               s1+=s2;
               int count = 0;
               for(int i=0;i<s1.size();i++){
                    if(s1[i-1]==s1[i]){
                          count++;
                    }
               }
               if(count<=1){
                  yes
               }
               else{
                  no
               }
           }  
     return 0;
}