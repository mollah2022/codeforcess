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
                       int n,m; cin >> n >> m;
                       int a1[101];
                       for(int i=0;i<n;i++) cin >> a1[i];
                       int a2[101];
                   for(int i=0;i<101;i++){
                         a2[i]=0;
                   }
                   for(int i=0;i<n;i++){
                       a2[a1[i]]++;
                   }
                   int mx = INT_MIN;
                   for(int i=0;i<101;i++){
                         mx = max(mx,a2[i]);
                   }
                   int find = 0;
                   for(int i=0;i<101;i++){
                        if(i==m){
                              find = a2[i];
                              break;
                        }
                   }
                  // cout << mx <<" " <<find<<endl;
                   if(find>=mx){
                          yes
                   }
                   else{
                       no
                   }

               }
  return 0;
}