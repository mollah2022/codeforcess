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
                    string s1; cin >> s1;
                    int count = 0;
                    if(n==1){
                          cout << 0 << endl;
                          continue;
                    }
                   int mx = 0;
                    reverse(s1.begin(),s1.end());
                    for(int i=0;i<s1.size();i++){
                           if(s1[i]!='P'){
                              mx = max(mx,count);
                              count = 0;
                           }
                           else{
                              count++;
                           }
                    }
            
                     cout << mx << endl; 
           }
     return 0;
}