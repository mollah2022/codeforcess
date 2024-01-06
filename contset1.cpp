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
                string s1; cin >> s1;
                int even = 0, odd = 0;
                for(int i=0;i<s1.size();i++){
                      if(s1[i]=='+'){
                          even++;
                      }
                      else{
                          odd++;
                      }
                }
                cout << abs(even-odd) << endl;
            }     
     return 0;
}