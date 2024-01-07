#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            int n,s; cin >> n >> s;
            ll ans = 0,count=0,p=0;
            for(int i=1;i<=s;i++){
                    ans+=n;
                    count++;
                    if(ans>=s){
                        cout << count << endl;
                          break;
                    }
                   
            }   
     return 0;
}