//Bismillahir Rahmanir Rahim
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
                  int n; cin >> n;
                  int a1[n];
                  int a2[n];
                  for(int i=1;i<=n;i++){
                      cin >> a1[i];
                      a2[i]=0;
                  }
                  for(int i=1;i<=n;i++){
                      a2[a1[i]]++;
                  }
                  vector<int>v1,v2;
                  for(int i=0;i<n;i++){
                      if(a2[i]==1){
                          v1.push_back(i);
                      }
                  }
                 
            }
  return 0;
}