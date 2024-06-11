//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
           int n; cin >> n;
           n = n+1;
          while(1){
                  string s1=to_string(n);
                 //sort(s1.begin(),s1.end());
                 char a = s1[0];
                 char b = s1[1];
                 char c = s1[2];
                 char d = s1[3];
                 if(a!=b && a!=c && a!=d && b!=a && b!=c && b!=d && 
                    c!=b && c!=a && c!=d && d!=b && d!=c && a!=d){
                        cout << s1 << endl;
                    break;
                 }
                 else{
                       n=n+1;
                 }
          }
       
  return 0;
}