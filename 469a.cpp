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
             int k; cin >> k;
             vector<int>v1;
             int n; cin >> n;
             for(int i=0;i<n;i++){
                int a; cin >> a;
                  v1.push_back(a);
             }  
             int m; cin >> m;
                  m = m+n;
             for(int i=n;i<m;i++){
                  int b; cin >> b;
                  v1.push_back(b);
             }
             sort(v1.begin(),v1.end());
             vector<int>v2;
             for(int i=0;i<100;i++){
                   v2.push_back(i+1);
             }
             int mx = INT_MIN;
             for(int i=0;i<v1.size();i++){
                mx = max(mx,v1[i]);
                   if(v1[i]==v1[i+1]){
                       v1.erase(v1.begin()+i);
                   }
                   if(v1[i]==0){
                       v1.erase(v1.begin()+i);
                   }
             }
           //  cout << v1.size() << endl;
             int cnt = 0;
             int cnt1=0;
             int sz = v1.size();
             for(int i=0;i<v1.size();i++){
                 // cout << v2[i] << " ";
                cnt1++;
                if(v1[i]!=v2[i]){
                       cnt=1;
                       break;
                }
                if(cnt1==sz){
                       break;
                }
             }
             //cout << mx << endl;
             if(cnt==0 && mx==k){
                   cout <<"I become the guy.\n";
             }
             else{
                   cout <<"Oh, my keyboard!\n";
             }
  return 0;
}