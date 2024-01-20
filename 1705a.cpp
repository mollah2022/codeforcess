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
                   int n,m; cin >> n >> m;
                   int  w = 2*n;
                   int a1[w];
                   vector < int > v1,v2;
                   for(int i=0;i<w;i++){
                          cin >> a1[i];
                   }
                   sort(a1,a1+w);
                   int z = w/2;
                   for(int i=0;i<z;i++){
                        v1.push_back(a1[i]);
                   }
                    for(int j=z;j<w;j++){
                        v2.push_back(a1[j]);
                   }
                   int count = 0;
                  for(int i=0;i<v1.size();i++){
                       if(v2[i]-v1[i]>=m){
                           count++;
                       }
                  }
                  if(count == n){
                       cout << "YES\n";
                  }
                  else{
                        cout <<"NO\n";
                  }

             } 
     return 0;
}