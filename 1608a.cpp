#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout <<"YES\n";
#define no   cout <<"NO\n";

int32_t main(){
         FAST
            tst{
                 int n; cin >> n;           
                 if(n==1){
                      cout << 1 << endl;
                      continue;
                 }
                 if(n>1){
                      cout << 2 <<" ";
                 }
                      int count = 1;
                      ll sum = 0;
                 for(int i=3;i<=10000;i++){
                       if(i%2!=0){
                            cout << i <<" ";
                            sum+=i;
                            count++;
                       }
                       if(count==n){
                         cout << endl;
                           break;
                       }
                 }
                // cout << (sum+2) <<" "<< count << endl;
            }

     return 0;
}