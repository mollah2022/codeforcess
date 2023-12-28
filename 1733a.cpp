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
                int n,k; cin >> n >> k;
                int a1[n];
                for(int i=0;i<n;i++){
                        cin >> a1[i];
                }
                if(n==1){
                        cout << a1[0] << endl;
                        continue;
                }
                ll sum = 0;
                for(int i=0;i<k;i++){
                        for(int j=i+1;j<n;j++){
                                if( (a1[i]%k) == (a1[j]%k) ){
                                      swap(a1[i],a1[j]);
                                      sum+=a1[i];
                                }
                        }
                }
                cout << sum << endl;
            } 
     return 0;
}