//Bismillahir Rahmanir Rahim
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
                   ll num1 = 0,num2 = 0;
                   for(int i=0;i<n;i++){
                      num1+=a1[i]-1;
                   }
                  
                   if(num1%2==0){
                      cout <<"maomao90\n";
                   }
                   else{
                       cout <<"errorgorn\n";
                   }
                  // cout << num1 <<" " << num2 << endl;
            }
  return 0;
}