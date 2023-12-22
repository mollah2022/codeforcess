#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                    int n; cin >> n;
                    int a1[n];
                   for(int i=1;i<=n;i++) cin >> a1[i];
                   if(n==1 && a1[1]%2==1){
                       cout << -1 << endl;
                   }
                   else if(a1[1]%2==0){
                      cout <<1<<endl<<1<<endl;
                   }
                   else if(a1[2]%2==0){
                      cout <<1<<endl<<2<<endl;
                   }
                   else{
                      cout << 2 << endl << 1 <<" "<< 2 << endl;
                   }

             }
    return 0;
}