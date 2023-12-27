#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)

int32_t main(){
     FAST
     int n; cin >> n;
     string s1; cin >> s1;
      if(s1[0]=='S' && s1[n-1]=='F'){
           cout <<"YES\n";
      }
      else{
         cout <<"NO\n";
      }
     return 0;
}