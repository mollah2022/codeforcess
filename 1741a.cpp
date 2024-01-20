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
                 ll n; cin >> n;
                 if(n==3){
                        cout << -1 << endl;
                        continue;
                 }
                 vector<int>v1;
                 for(int i=n;i>0;i--){
                      v1.push_back(i);
                 }
                 int h = 0;
                   h = v1[0]-1;
                   cout << h <<" ";
                 for(int i=1;i<v1.size();i++){
                      if(i%2!=0){
                          cout << h-1 <<" ";
                      }
                      else{
                         cout << h+1 << " ";
                      }
                 }
                 cout << endl;
            }  
     return 0;
}