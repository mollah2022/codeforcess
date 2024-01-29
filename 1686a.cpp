#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST 
              tst{
                    int n; cin >> n;
                    int a1[n];
                     bool ria = false;
                    for(int i=0;i<n;i++){
                           cin >> a1[i];
                    }
                    for(int i=0;i<n;i++){
                           ll sum = 0;
                           int p = a1[i];
                           for(int j=0;j<n;j++){
                                if(j!=i){
                                      sum+=a1[j];
                                }
                           }
                           int  a = n-1;
                           int h = (sum/a);
                           //cout << h << endl;
                        if( sum%a==0 && h == p){
                               ria = true;
                              // cout << sum/a << endl;
                        }
                    }
                    if(ria == 1){
                          yes
                    }
                    else{
                        no
                    }
              }  
     return 0;
}