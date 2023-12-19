#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
        sajib
           int t; cin >> t;
           while(t--){
               int n; cin >> n;
               int a1[n];
                bool h = false;
                bool z = false;
               for(int i=0;i<n;i++){ cin >> a1[i];}
                 for(int i=0;i<n;i++){
                    if(i==0){
                          if(a1[0]==1){
                                h = true;
                                break;
                          }
                    }
                 }
                 if(h==1){
                      cout <<"YES\n";
                 }
                 else{
                     cout <<"NO\n";
                 }
           }
    return 0;
}