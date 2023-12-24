#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                   int n; cin >> n;
                   string s1; cin >> s1;
                   int l = s1.size();
                   if(l>=11 && s1[0]=='8'){
                       cout << "YES\n";
                       continue;
                   }
                   if(l<11){
                        cout <<"NO\n";
                        continue;
                   }
                   bool g = false;
                   if(l>=11){
                        int r = l-10;
                        for(int i=0;i<r;i++){
                              if(s1[i]=='8'){
                                  g = true;
                                  break;
                              }
                        }
                        if(g==1){
                              cout << "YES\n";
                        }
                        else{
                              cout << "NO\n";
                        }
                   }

             }
    return 0;
}