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
               string s9; cin >> s9;
               string s1,s2,s3,s4,s5; cin >> s1 >> s2 >> s3 >> s4 >> s5;
               string s = s1+s2+s3+s4+s5;
             //  cout <<s << endl;
               bool find = false;
               for(int i=0;i<s.size();i++){
                    if(s9[0]==s[i] || s9[1]==s[i]){
                           find = true;
                           break;
                    }
               }
               if(find==true){
                       cout <<"YES\n";
               }
               else{
                     cout <<"NO\n";
               }
  return 0;
}