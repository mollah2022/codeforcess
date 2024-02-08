#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST 
               string s1; cin >> s1;
               int count= 0;
               for(int i=0;i<s1.size();i++){
                    if(s1[i]=='0'){
                           count++;
                    }
               }  
               if(count==1){
                   for(int i=0;i<s1.size();i++){
                        if(s1[i]=='0'){
                              s1.erase(s1.begin()+i);
                        }
                   }
                   cout << s1 << endl;
               }
               else if(count==0){
                   for(int i=0;i<s1.size()-1;i++){
                      cout << s1[i];
                   }
                   cout << endl;
               }
               else{
                        //reverse(s1.begin(),s1.end());
                        for(int i=0;i<s1.size();i++){
                               if(s1[i]=='0'){
                                   s1.erase(s1.begin()+i);
                                   break;
                               }
                        }
                        cout << s1 << endl;
               }
     return 0;
}