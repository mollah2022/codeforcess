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
            string s1,s2; cin >> s1 >> s2;
            string s3="";
            string s4="";
          for(int i=0;i<s1.size();i++){
                   char ch = tolower(s1[i]);
                   s3+=ch;
          }
           for(int i=0;i<s2.size();i++){
                   char ch = tolower(s2[i]);
                   s4+=ch;
          }
        //sort(s3.begin(),s3.end());
       // sort(s4.begin(),s4.end());
        bool find = false;
        for(int i=0;i<s3.size();i++){
               if(s3[i]<s4[i]){
                     cout << -1 << endl;
                     find = true;
                     break;
               }
               else if(s3[i]>s4[i]){
                   cout << 1 << endl;
                   find = true;
                   break;
               }
        }
        if(find == false){
              cout << 0 << endl;
        }
  return 0;
}