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
                int n,x,a,b; cin >> n >> x >> a >> b;
                if(x==0){
                        cout << abs(a-b)<< endl;
                        continue;
                }
                int count1 = max(a,b);
                int rem1 = min(a,b);
                int rem = rem1;
                int count = count1;
                int mx = INT_MIN;
                for(int i=0;i<x;i++){
                        if(count<n){
                                count++;
                        }
                        else if(rem>1){
                              rem--; 
                        }
                     int f = abs(count-rem);
                     mx = max(mx,f);
                     if(count>n || rem<1){
                        break;
                     }
                }
                
              cout << mx << endl;
            }
           
     return 0;
}