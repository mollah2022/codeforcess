#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                int sum = 0;
                int mul = 1;
                    int n; cin >> n;
                    int a1[n];
                    for(int i=0;i<n;i++){
                          cin >> a1[i];             
                    }
                sort(a1,a1+n);
                int ans = 0;
                for(int i=0;i<n/2;i++){
                      for(int j=n-1;j<n/2;j++){
                          ans+=a1[j]-a1[i];
                      }
                }

               cout << ans << endl;
                    
             }
    return 0;
}