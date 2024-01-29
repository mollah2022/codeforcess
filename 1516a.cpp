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
                  int a1[n];
                  for(int i=0;i<n;i++){
                        cin >> a1[i];
                  }
                  sort(a1,a1+n);
                  for(int j=0;j<m;j++){
                      for(int i=0;i<n;i++){
                       a1[i] = a1[i]+1;
                       a1[i+1] = a1[i+1]-1;
                     }
                  }

                  for(int i=0;i<n;i++){
                       cout << a1[i] <<" ";
                  }
                  cout << endl;
              }   
     return 0;
}