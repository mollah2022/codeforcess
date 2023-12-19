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
                int sum = 0;
                int mn = INT_MIN;
                for(int i=0;i<n;i++){
                        cin >> a1[i];
                        mn = min(mn,a1[i]);    
                       sum++;                 
                }

                if(sum%2==0){
                       cout <<0<< endl;
                       continue;
                }
                cout << mn << endl;
                int count = 0;
               if(mn%2==0){
                   while(mn>1){
                         mn = mn/2;
                         count++;
                   }
               }
               else{
                      while(mn>0){
                         mn = mn/2;
                         count++;
                   }

               }
           // cout << count << endl;

           }
    return 0;
}