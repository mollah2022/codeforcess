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
             int n; cin >> n;
             for(int i=1;i<=n;i++){
                     if(i%2!=0){
                            cout << "I hate ";
                            if(n>i){
                                  cout << "that ";
                            }
                            else{
                                     cout <<"it ";
                            }
                     }
                     else{
                                cout << "I love ";
                            if(n>i){
                                  cout << "that ";
                            }
                            else{
                                     cout <<"it ";
                            }
                     }
             }
  return 0;
}