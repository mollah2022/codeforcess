#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
             int n,m; cin >> n >> m;
             int count = -1;
             while(m%n==0){
                  count++;
                  m/=n;
             }
           if(count>=0 && m==1){
               cout <<"YES\n" << count << endl;
           }     
           else{
              cout << "NO\n";
           }     
  return 0;
}