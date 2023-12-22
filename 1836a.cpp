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
                     bool h = false;
                   for(int i=0;i<n;i++) cin >> a1[i];
                 //sort(a1,a1+n);
             if(n==1 && a1[0]!=0){
                  cout <<"NO\n";
                  continue;
             }
               for(int i=0;i<n-1;i++){
                   if((abs(a1[i+1]-a1[i]))>1 && a1[i+1]>=a1[i]){
                        h = true;
                        break;
                   }
               }
               if(h==1){
                  cout <<"NO\n";
               }
               else{
                   cout << "YES\n";
               }
            }
    return 0;
}