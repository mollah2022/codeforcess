#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
             tst{
                   vector<int>v1;
                   int n = 22;
                   for(int i=1;i<=n;i++){
                       int x,y; cin >> x >> y;
                       int ans = x+(y*20);
                       v1.push_back(ans);
                   }
                int find = 0;
                int mx = 0;
                for(int i=0;i<v1.size();i++){
                          mx=max(mx,v1[i]);
                }
                for(int i=0;i<v1.size();i++){
                      if(v1[i]==mx){
                        find = i+1;
                        break;
                      }
                }
                cout << find << endl;
             }
  return 0;
}