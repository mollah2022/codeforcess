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
               int n,m; cin >> n >> m;
                 int cnt = 0;
               for(int i=0;i<n;i++){
                     if(i%2==0){
                             for(int i=0;i<m;i++){
                               cout << "#";
                          }
                          cout << endl;
                     }
                     else{
                              cnt++;
                              if(cnt%2!=0){
                             for(int i=0;i<m-1;i++){
                                      cout <<".";
                                  }
                                 cout <<"#\n";
                              }
                              else{
                                        cout <<"#";
                                        for(int i=0;i<m-1;i++){
                                               cout <<".";
                                        }
                                        cout << "\n";
                              }
                     }
               }
  return 0;
}