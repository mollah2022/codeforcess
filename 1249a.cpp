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
                   int count = 0;
                    for(int i=0;i<n;i++){
                           int temp = abs(a1[i]-a1[i+1]);
                           if(temp == 1){
                              count++;
                           }
                    }  
                    //cout << count << endl;              
                   if(count == 0){
                      cout << 1 << endl;
                   }
                   else{
                        cout << 2 << endl;
                   }
              }  
     return 0;
}