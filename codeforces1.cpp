//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";
const int mx = 123;
int a1[mx][mx];

int32_t main(){
           FAST()
              int n; cin >> n ;
              for(int i=0;i<n;i++){
                   for(int j=0;j<n;j++){
                         cin >> a1[i][j];
                   }
              }
              int sum1 = 0, sum2 = 0;
              for(int i=0;i<n;i++){
                     sum1 +=a1[i][i];
              }
               for(int i=0,j=n-1;i<n;i++,j--){
                     sum2 +=a1[i][j];
              }
              int ans = abs(sum1-sum2);
              cout << ans << endl;
  return 0;
}