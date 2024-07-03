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
               tst{
                       string s1; cin >> s1;
                       if(s1=="abc"){
                           cout << "YES\n";
                           continue;
                       }
                       if(s1[0]=='a'){
                           swap(s1[1],s1[2]);
                             if(s1=="abc"){
                                   cout <<"YES\n";
                             }
                       }
                       else if(s1[1]=='b'){
                          swap(s1[0],s1[2]);
                            if(s1=="abc"){
                                  cout <<"YES\n";
                            }
                       }
                       else if(s1[2]=='c'){
                          swap(s1[0],s1[1]);
                              if(s1=="abc"){
                                  cout <<"YES\n";
                              }
                       }
                       else{
                              cout <<"NO\n";
                       }
               }
  return 0;
}