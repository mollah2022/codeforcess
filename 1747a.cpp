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
                  for(int i=0;i<n;i++){
                       cin >> a1[i];
                  }
                  sort(a1,a1+n);
                  ll sum1=0,sum2=0;
                  if(n%2==0){
                        for(int i=0;i<n/2;i++){
                             sum1=abs(sum1+a1[i]);
                        }
                        for(int i=n/2;i<n;i++){
                              sum2=abs(sum2+a1[i]);
                        }
                  }
                  else{
                        
                          for(int i=0;i<=n/2;i++){
                             sum1 = abs(a1[i]+sum1);
                        }
                        for(int i=(n/2)+1;i<n;i++){
                              sum2=abs(sum2+a1[i]);
                        }

                  }
                  //cout << sum1 
                  cout << (sum2-sum1)<<endl;
            }  
     return 0;
}