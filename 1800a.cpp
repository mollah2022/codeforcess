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
            tst{
                   int n; cin >> n;
                   string s1; cin >> s1;
                   string s2="";
                   string s3 = "meow";
                  for(int i=0;i<s1.size();i++){
                       s2+=tolower(s1[i]);
                  }
                  for(int i=0;i<s2.size()-1;i++){
                      if(s2[i]==s2[i+1]){
                          s2.erase(s2.begin()+i);
                          i--;
                      }
                  }
                  //cout << s2 << endl;
                  if(s2==s3){
                    yes
                  }
                  else{
                    no
                  }
            }
  return 0;
}