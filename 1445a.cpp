#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                   int n,x; cin >> n >> x;
                   int a1[n],a2[n];
                   for(int i=0;i<n;i++) cin >> a1[i];
                   for(int i=0;i<n;i++) cin >> a2[i];

                    sort(a1,a1+n);
                    sort(a2,a2+n);
                    reverse(a2,a2+n);
                   bool p = false;
                    for(int i=0;i<n;i++){
                        int b = a2[i]+a1[i];
                       // cout << a2[i]<<" " << a1[i] << endl;
                       // cout << b << endl;
                          if(b>x){
                              p = true;
                              break;
                          }
                          b = 0;
                    }
                    if(p == 0){
                          cout << "YES\n";
                    }
                    else{
                        cout << "NO\n";
                    }
             }
    return 0;
}