//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

bool cmp( const pair<int,int>&p1,const pair<int,int>&p2){
       if(p1.first>p2.first) return 1;
       else if(p1.first == p2.first ) return (p1.second < p2.second);
        else return 0;
}

int32_t main(){
           FAST()
           int n,k; cin >> n >> k;
           vector<pair<int,int>>v1(n);
           for(int i=0;i<n;i++){
                 cin >> v1[i].first >> v1[i].second;
                 //v1[i].first *=-1;
           }
           sort(v1.begin(),v1.end(),cmp);
           int ans = 0;
           for(auto u : v1){
                if(u == v1[k-1]){
                      ans++;
                }
           }
           cout << ans << endl;
  return 0;
}