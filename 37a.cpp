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
                list<int>li;
                vector<int>v1;
                for(int i=0;i<n;i++){
                   int y; cin >> y;
                       v1.push_back(y);
                       li.push_back(y);
                }  
                li.sort();              
                li.unique();
                sort(v1.begin(),v1.end());
                int found = 0,count = 0;
                for(int i=0;i<v1.size();i++){
                      for(int j=i+1;j<v1.size();j++){
                            if(v1[i]==v1[j]){
                                  found = 1;
                                  v1.erase(v1.begin()+j);
                            }
                            else{
                                  break;
                            }
                      }
                      if(found==1){
                          count++;
                          found = 0;
                          break;
                      }
                }
                int l = li.size();
                cout << count+1 << " " << l << endl;
     return 0;
}