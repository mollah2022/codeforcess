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
                          int sum = 0;
                          for(int i=0;i<s1.size();i++){
                                if(s1[i]>='0' && s1[i]<='9'){
                                      int a = s1[i]-'0';
                                      sum+=a;
                                }
                          }
                          cout << sum << endl;
                }
  return 0;
}