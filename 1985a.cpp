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
                     string s1,s2; cin >> s1 >> s2;
                     cout <<s2[0]<<s1[1]<<s1[2] <<" ";
                     cout <<s1[0]<<s2[1]<<s2[2] <<"\n";
              }
  return 0;
}