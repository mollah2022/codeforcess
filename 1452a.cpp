#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                   string s; cin >> s;
                 int f1=0,ans=0,s1=0;
                 for(int i=0;i<s.size();i++){
                       if(s[i]=='('){
                           f1++;
                       }
                       else if(s[i]==')'){
                           if(f1){
                               f1--;
                               ans++;
                           }
                       }
                        if(s[i]=='['){
                           s1++;
                       }
                       else if(s[i]==']'){
                           if(s1){
                               s1--;
                               ans++;
                           }
                       }
                 }
                 cout << ans << endl;
                   
             }
    return 0;
}