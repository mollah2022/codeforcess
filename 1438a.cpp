#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                   int n; cin >> n;
                   if(n==1){
                       cout << 2 << endl;
                       continue;
                   }
                 if(n%2==0){
                    for(int i=0;i<n;i++){
                          cout << n <<" ";
                    }
                    cout << endl;
                 }
                 else{
                      for(int i=0;i<n;i++){
                           cout << n <<" ";
                      }
                      cout << endl;
                 }
              
                   
             }
    return 0;
}