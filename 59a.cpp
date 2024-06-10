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
             int lr = 0;
             int hr = 0;
             for(int i=0;i<s1.size();i++){
                  if(s1[i]>='a' && s1[i]<='z'){
                       lr++;
                  }
                  else{
                      hr++;
                  }
             }
             if(lr>=hr){
                   for(int i=0;i<s1.size();i++){
                         char ch =tolower(s1[i]);
                         cout << ch;
                   }
                   cout << endl;
             }
             else{
                        for(int i=0;i<s1.size();i++){
                         char ch =toupper(s1[i]);
                         cout << ch;
                   }
                   cout << endl;
             }
  return 0;
}