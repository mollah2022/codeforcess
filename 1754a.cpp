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
                 int a = 0,q = 0;
                   for(int i=0;i<s1.size();i++){
                        if(s1[i]=='Q'){
                              q++;
                              for(int j=i+1;j<s1.size();j++){
                                    if(s1[j]=='A'){
                                         s1.erase(s1.begin()+j);
                                          a++;
                                          break;
                                    }
                              }
                        }
                   }
                   if(q==a){
                       yes
                   }
                   else{
                     no
                   }

              }   
     return 0;
}