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
              vector<int>v1;
              for(int i=0;i<n;i++){
                   int a; cin >> a;
                   v1.push_back(a);
              }
              sort(v1.begin(),v1.end());
              for(int i=0;i<v1.size();i++){
                   v1[i] = v1[i]+m;
              }
              int cnt = 0;
              for(int i=0;i<v1.size();i++){
                    if(v1[i]<=5){
                           cnt++;
                    }
              }
              cout << cnt/3 << endl;

  return 0;
}