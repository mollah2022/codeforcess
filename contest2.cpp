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
              vector<int>v1(n);
                 for(int i=0;i<n;i++){
                       int k; cin >> k;
                       v1.push_back(k);
                }
                sort(v1.begin(),v1.end());
                int cnt = 0;
                for(int i=0;i<v1.size();i++){
                       cnt++;
                       if(cnt%2!=0){
                            v1.pop_back();
                       }
                       else if(cnt%2==0){
                        v1.erase(v1.begin()+i);
                       }
                       else if(cnt==m){
                           break;
                       }
                }
                for(int i=0;i<v1.size();i++){
                      cout << v1[i] <<" ";
                }

             return 0;
}