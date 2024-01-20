#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
          string s1; cin >> s1;
          bool ria = false;
          int l = s1.size();
          for(int i=0;i<l-1;i++){
               if(s1[i]>s1[i+1]){
                   ria = true;
                   break;
               }
          }
         // cout << ria << endl;
          if(ria == true){
              cout <<"No\n";
          }
          else{
               cout <<"Yes\n";
          }
     return 0;
}