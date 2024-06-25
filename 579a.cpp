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
              string s1 = "";
              while(n>0){
                     int temp = n%2;
                     char ch = temp+'0';
                     s1+=ch;
                     n = n/2;
              }
              int cnt = 0;
             // cout << s1 << endl;
              for(int i=0;i<s1.size();i++){
                   if(s1[i]=='1'){
                       cnt++;
                   }
              }
              cout << cnt << endl;
  return 0;
}