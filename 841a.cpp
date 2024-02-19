#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
             int n,m; cin >> n >> m;
             string s1; cin >> s1;
             int f[n]={0};
             for(int i=0;i<s1.size();i++){
                   f[s1[i]-'a']++;
             }
             cout << f[0]<<endl;
             for(int i=0;i<n;i++){
                  if(f[i]>m){
                      no
                      return 0;
                  }
             }
          yes
  return 0;
}