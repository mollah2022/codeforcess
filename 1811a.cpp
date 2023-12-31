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
                int n,m; cin >> n >> m;
                string s1; cin >> s1;
                vector < int > v1;
                for(int i=0;i<s1.size();i++){
                      int x = s1[i]-'0';
                      v1.push_back(x);
                }
                bool ria = false;
                int l = v1.size();
                for(int i=0;i<v1.size();i++){
                    if(m>v1[i]){
                        v1.insert(v1.begin()+i,m);
                        ria = true;
                        break;
                    }
                }
                for(int i=0;i<v1.size();i++){
                    cout <<v1[i];
                }
                if(ria == 1){
                    cout << endl;
                }
                else{
                    cout << m << endl;
                }
            }     
     return 0;
}