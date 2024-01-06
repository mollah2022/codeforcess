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
                 vector<int>v1;
                 int count  = 0;
                 for(int i=0;i<n;i++){
                     int y; cin >> y;
                     v1.push_back(y);
                     if(v1[i]==0){
                        count++;
                        v1[i]=1;
                     }
                 }
                 int even = 0,odd = 0;
                 for(int i=0;i<n;i++){
                      if(v1[i]>0){
                         even+=v1[i];
                      }
                      else{
                        odd+=v1[i];
                      }
                 }
              //cout << even <<" "<<odd<<endl;
                 if(even+odd==0){
                     cout << count+1 << endl;
                 }
                 else{
                    cout << count << endl;
                 }
            }      
     return 0;
}