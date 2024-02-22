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
            std::vector<int> v1;
            int value = 0;
            while(m--){
                  string s1; cin >> s1;
                  int count = 0;
                  for(int i=0;i<s1.size();i++){
                      if(s1[i]=='1'){
                           count++;
                      }
                  }
                  if(count!=n){
                      value++;
                      v1.push_back(value);
                  }
                  else if(count==n){
                      value=0;
                  }
            }
            int mx = 0;
            for(int i=0;i<v1.size();i++){
                  mx = max(mx,v1[i]);
            }
            cout << mx << endl;
  return 0;
}