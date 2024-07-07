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
                          string s1; cin >> s1;
                          int find = 0;
                          for(int i=0;i<s1.size();i++){
                                if(s1[i]=='B'){
                                        find =i;
                                        break;
                                }
                          }
                          int find1 = 0;
                           for(int i=s1.size()-1;i>=0;i--){
                                if(s1[i]=='B'){
                                        find1 =i+1;
                                        break;
                                }
                          }
                          cout << find1-find << endl;
                 }
  return 0;
}