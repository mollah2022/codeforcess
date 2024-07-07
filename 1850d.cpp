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
              tst{
                     int n,k; cin >> n >> k;
                     vector<int>v1(n);
                     for(int i=0;i<n;i++){
                           int m; cin >> m;
                           v1.push_back(m);
                     }
                     sort(v1.begin(),v1.end());
                     int cnt = 0;
                     for(int i=0;i<v1.size()-1;i++){
                           if(v1[i+1]-v1[i]<=k){
                            cnt++;
                                   i = i+1;
                                 v1.erase(v1.begin()+i);
                           }
                     }
                     cout << cnt << endl;
              }
  return 0;
}