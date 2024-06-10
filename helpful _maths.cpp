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
             string s1; cin >> s1;
             string s2 = "";
             for(int =0;i<s1.size();i++){
                   if( s1[i]>='1' && s1[i]<='3' ){
                        s2+=s1[i];
                   }
             }
             sort(s2.begin(),s2.end());
             string s3 = "";
             for(int i=0;i<s2.size();i++){
                      s3+=s2[i];
                      s3+='+';
             }
             for(int i=0;i<s3.size()-1;i++){
                  cout << s[i];
             }
             cout << endl;
  return 0;
}