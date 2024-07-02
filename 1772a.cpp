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
                    sort(s1.begin(),s1.end());
                    string s2 = "Timur";
                    sort(s2.begin(),s2.end());
                    if(s1==s2){
                         yes
                    }
                    else{
                          no
                    }
              }
  return 0;
}