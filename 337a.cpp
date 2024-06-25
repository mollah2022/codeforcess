//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
               int n,m; cin >> n >> m;
               int a1[m];
               for(int i=0;i<m;i++) cin >> a1[i];
                std::vector<int> v1;
                      for(int i=0;i<n;i++){
                          v1.push_back(a1[i]);
                  }
                  int mx = INT_MIN;
                  int mn = INT_MAX;
                  for(int i=0;i<v1.size();i++){
                       mx = max(mx,v1[i]);
                       mn = min(mn,v1[i]);
                  }
                  cout << mx-mn << endl;
  return 0;
}