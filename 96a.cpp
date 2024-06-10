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
               int one = 0,zero = 0;
            //   bool find = false;
               for(int i=0;i<s1.size();i++){
                    if(s1[i]=='1' && s1[i+1]=='1' && s1[i+2]=='1' &&
                    s1[i+3]=='1' && s1[i+4]=='1' && s1[i+5]=='1' && s1[i+6]=='1' ){
                             one = 1;
                            break;
                    }
                    else  if(s1[i]=='0' && s1[i+1]=='0' && s1[i+2]=='0' &&
                    s1[i+3]=='0' && s1[i+4]=='0' && s1[i+5]=='0' && s1[i+6]=='0' ){
                             zero = 1;
                            break;
                    }
               }
               if(one==1 || zero==1){
                     yes
               }
               else{
                    no
               }
  return 0;
}