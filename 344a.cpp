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
           std::vector<string> v1;
                tst{
                        string s1; cin >> s1;
                        v1.push_back(s1);
                }
                   int cnt = 1;
                for(int i=0;i<v1.size()-1;i++){
                          if(v1[i]!=v1[i+1]){
                                cnt++;
                          }
                }
                cout << cnt << endl;
  return 0;
}