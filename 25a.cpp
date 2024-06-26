//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
               int n; cin >> n;
               int a1[n];
               for(int i=0;i<n;i++) cin >> a1[i];
                int even=0, odd=0;
            int findeven = 0,findodd = 0;
            for(int i=0;i<n;i++){
                   if(a1[i]%2==0){
                      even++;
                      findeven=i+1;
                   }
                   else{
                      odd++;
                      findodd=i+1;
                   }
            }
           // cout << even <<" "<<odd<<endl;
            if(even==1){
                   cout << findeven << endl;
            }
            else{
                  cout << findodd << endl;
            }
  return 0;
}