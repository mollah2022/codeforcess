#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
              int t; cin >> t;
              int n = t;
              vector<string>v1;
              map < int ,string> mp;
              for(int i=0;i<t;i++){
                   string s1; cin >> s1;
                   v1.push_back(s1);
              }
              int l = v1.size();
              for(int i=0;i<l;i++){
                   for(int j=i+1;j<l;j++){
                       if(v1[i]==v1[j]){
                           mp.insert({j,"YES"});
                       }
                   }
                   mp.insert({i,"NO"});
              }
              for( auto it:mp){
                  cout << it.second << endl;
              }
    return 0;
}