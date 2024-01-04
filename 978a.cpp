#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            int n; cin >> n;
            int a1[n],a2[1001];
            for(int i=0;i<n;i++){
                  cin >> a1[i];
            } 
            fill(a2,a2+1001,0);
            vector < int > v1;
            for(int i=n-1;i>=0;i--){
                if(a2[a1[i]]==0){
                    a2[a1[i]]=1;
                    v1.push_back(a1[i]);
                }
            }
            cout << v1.size() << endl;
            reverse(v1.begin(),v1.end());
            for(int i=0;i<v1.size();i++){
                cout << v1[i] <<" ";
            }
     return 0;
}