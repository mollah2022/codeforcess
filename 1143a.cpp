#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
              int n; cin >> n;
              int a1[n];
              vector < int > v1,v2;
              for(int i=0;i<n;i++){
                   cin >> a1[i];
              }
               for(int i=0;i<n;i++){
                   if(a1[i]==0){
                      v1.push_back(i+1);
                   }
                   else{
                      v2.push_back(i+1);
                   }
              }
              sort(v1.begin(),v1.end());
              sort(v2.begin(),v2.end());
              int m1 = v1[v1.size()-1];
              int m2 = v2[v2.size()-1];
              cout << min(m1,m2) <<endl;
     return 0;
}