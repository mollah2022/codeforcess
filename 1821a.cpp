#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                   string s1,s2; cin >> s1;
                   int ans = 1;
                   if(s1[0]=='0'){
                        cout << 0 << endl;
                        continue;
                   }
                   if(s1[0]=='?'){
                     ans*=9;
                   }      
                   for(int i=1;i<s1.size();i++){
                         if(s1[i]=='?'){
                              ans*=10;;
                        }
                   }
                cout << ans << endl;
             }
    return 0;
}