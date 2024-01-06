#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            int n; cin >> n;
            int a1[n];
            int mn = INT_MAX;
            for(int i=0;i<n;i++){
                  cin >> a1[i];
                  mn = min(mn,a1[i]);
            }
            sort(a1,a1+n);
            bool ria = false;
            for(int i=0;i<n;i++){
                if(mn<a1[i]){
                      mn = a1[i];
                      ria = true;
                      break;
                }
            }  
            if(ria == 1){
                  cout << mn << endl;
            } 
            else{
                cout << "NO\n";
            }   
     return 0;
}