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
               char ch  = 'a';
               string s1 = "abcdefghijklmnopqrstuvwxyz";
               string s2 = "";
               for(int i=0;i<m;i++){
                   s2+=s1[i];
               }
               for(int i=0;i<n-m;i++){
                    s2+=ch;
               }
               cout << s2 << endl;
  return 0;
}