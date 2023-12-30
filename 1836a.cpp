#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            tst{
                int n,m; cin >> n;
                vector < int > v1(101,0);
              int mx = INT_MIN;
              for(int i=0;i<n;i++){
                    // int m;
                    cin >> m;
                    mx = max(mx,m);
                    v1[m]++;
              }
                
              bool ria = false;
              for(int i=0;i<mx;i++){
                  if(v1[i]<v1[i+1]){
                       ria = true;
                       break;
                  }
              }
              if(ria==1){
                   cout <<"NO\n";
              }
              else{
                  cout << "YES\n";
              }
            }       
     return 0;
}