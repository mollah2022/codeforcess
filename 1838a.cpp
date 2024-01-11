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
                  int n; cin >> n;
                  int a1[n];
                  for(int i=0;i<n;i++){
                      cin >> a1[i];
                  }
                  int found = 0;
                  for(int i=0;i<n-1;i++){
                       int rem = a1[i]-a1[i+1];
                      for(int j=0;j<n;j++){
                          if(rem==a1[j]){
                                cout << a1[i] << endl;
                                found = 1;
                                break;
                          }
                      }
                      if(found == 1){
                         break;
                      }
                      
                  }
                   
            }     
     return 0;
}