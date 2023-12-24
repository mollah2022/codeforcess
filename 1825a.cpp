#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                   string s1; cin >> s1;
                   bool h = false;
                   int l = s1.size();                
                        for(int i=0;i<l-1;i++){
                              if(s1[i]!=s1[i+1]){
                                   h = true;
                                   break;
                              }
                        }      
                   //cout << h << endl;
                   if(h==0){
                        cout << -1 << endl;
                   }
                   else{
                      cout << l-1 << endl;
                   }
             }
    return 0;
}