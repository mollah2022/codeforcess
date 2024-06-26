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

                        string s1,s2,s3; cin >> s1 >> s2 >> s3;
                        string s4 = (s1+s2);
                        sort(s3.begin(),s3.end());
                        sort(s4.begin(),s4.end());
                        if(s3!=s4){
                             no
                             return 0;
                        }
                        bool find = false;
                       for(int i=0;i<s3.size();i++){
                             if(s3[i]!=s4[i]){
                                   find = true;
                                   break;
                             }
                       }
                  if(find == 1){
                        no
                  }
                  else{
                       yes
                  }
  return 0;
}