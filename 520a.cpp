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
           string s2 = "abcdefghijklmnopqrstuvwxyz";
           int n; cin >> n;
           string s1; cin >> s1;
           for (auto& x : s1) { 
                   x = tolower(x); 
          } 
          sort(s1.begin(),s1.end());
         unique(s1.begin(),s1.end());
         // cout << s1 << endl;
          bool find = false;
          for(int i=0;i<s2.size();i++){
               if(s2[i]!=s1[i]){
                    find = true;
                    break;
               }
          }
        if(find == false){
              yes
        }
        else{
              no
        }
  return 0;
}