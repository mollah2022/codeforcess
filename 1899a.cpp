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
                     int n; cin >> n;
                   int   find1=0,find=0;
                     for(int i=1;i<=10;i++){
                               if(i%2!=0){
                                              n = n+1;
                              if(n%3==0){
                                   find=1;
                                   break;
                              }
                        }
                     else{
                                  n = n+1;
                                  if(n%3==0){
                                       find1=1;
                                       break;
                                  }
                     }
           }

                     if(find==1){
                           cout <<"First\n";
                     }
                     else{
                          cout <<"Second\n";
                     }

              }
  return 0;
}