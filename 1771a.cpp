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
                   int m=0,ns=0;
                   for(int i=0;i<n;i++){
                        cin >> a1[i];
                   }
                    m = *max_element(a1,a1+n);
                    ns = *min_element(a1,a1+n);
                    ll ans = (m-ns);
                   vector<int>v1;
                   for(int i=0;i<n;i++){
                        if(a1[i]==m || a1[i]==ns){
                              v1.push_back(a1[i]);
                        }
                   }
                   ll count = 0;
                   sort(v1.begin(),v1.end());
                   for(int i=0;i<v1.size();i++){
                       for(int j=0;j<v1.size();j++){
                            ll p = abs(v1[j]-v1[i]);
                            if(p==ans){
                                count++;
                            }
                       }
                   }
                   cout << count << endl;

              }  
     return 0;
}