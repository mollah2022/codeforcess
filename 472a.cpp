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
               if(n%2==0){
                   cout << 8 <<" "<<n-8 << endl;
               }
               else{
                       cout <<9 <<" " <<n-9 << endl;
               }
  return 0;
}