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
                          vector<int>v1;
                          for(int i=1;i<1667;i++){
                              int  b = (i%10);
                             //   cout <<b<<"=="<<endl;
                                     if(i%3!=0 && b!=3){
                                          v1.push_back(i);
                                       }
                          }
                          n = n-1;
                          for(int i=0;i<v1.size();i++){
                                 if(n==i){
                                       cout << v1[i]<<endl;
                                       break;
                                 }
                          }

                  }
  return 0;
}