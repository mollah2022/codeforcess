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
                vector<int> v1,v2;
                for(int i=1;i<=n;i++){
                   v1.push_back(i);
                }
                for(int i=1;i<=v1.size();i++){
                      if(i==v1[i]){
                          v1[i+1]=v1[i];
                      }
                }
                for(int i=1;i<=v1.size()-1;i++){
                    cout <<v1[i]<<" ";
                }
               cout <<1<<" " << endl;
            }     
     return 0;
}