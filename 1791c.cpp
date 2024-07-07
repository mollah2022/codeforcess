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
                     int r = s1.size()-1;
                     int l = 0;
                     int ans = n;
                     while(s1[l]!=s1[r] && n > 0){
                           l++;
                           r--;
                           n -=2;
                     }
                     cout << n << endl;
               }
  return 0;
}