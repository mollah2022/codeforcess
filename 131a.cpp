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
           string s1; cin >> s1;
           int find = 0;
           int sz = s1.size();
           int cnt = 0;
            for(int i=0;i<s1.size();i++){
                       if(s1[i]>='A' && s1[i]<='Z'){
                           cnt++;
                       }
           }
           if(cnt==sz){
                 for(int i=0;i<s1.size();i++){
                         char cp = tolower(s1[i]);
                          cout << cp;
                 }
                 cout << endl;
                 return 0;
           }
           for(int i=1;i<s1.size();i++){
                       if(s1[i]>='A' && s1[i]<='Z'){
                           find++;
                       }
           }
           //cout << find << endl;
           if((sz-find)==1 ){
                char ch = toupper(s1[0]);
                cout << ch;
                for(int i=1;i<s1.size();i++){
                       char ch1 = tolower(s1[i]);
                       cout << ch1;
                }
                cout << endl;
           }
           else{
               cout << s1 << endl;
           }
  return 0;
}