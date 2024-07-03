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
                   ll n,m; cin >> n >> m;
                   if(n%m==0){
                        cout << n/m << endl;
                   }
                   else{
                             cout << (n/m)+1<< endl;   
                   }
  return 0;
}