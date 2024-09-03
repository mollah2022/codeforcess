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
                     std::vector<int> v1;
                     while(n--){
                            string s1; cin >> s1;
                          for(int i=0;i<s1.size();i++){
                               if(s1[i]=='#'){
                                  v1.push_back(i+1);
                                  break;
                               }
                          }
                     }
                     for(int i=v1.size()-1;i>=0;i--){
                           cout << v1[i] <<" ";
                     }
                     cout << endl;
              }
  return 0;
}