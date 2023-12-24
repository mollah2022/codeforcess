#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
               map <int ,char> mp;
             while(t--){
                      int n,m; cin >> n >> m;
                      string s[] = {"a","b","c"};
                      string s1;
                      for(int i=0;i<m;i++){
                        s1+='a';
                      }
                      int j = 2;
                      for(int i=0;i<n-m;i++){
                          s1+=s[j];
                          j--;
                          if(j==-1){
                            j=2;
                          }
                      }
                      cout << s1 << endl;
             }
    return 0;
}