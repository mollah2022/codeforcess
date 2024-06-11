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
             string s1; cin >> s1;
             int d=0,a=0;
             for(int i=0;i<s1.size();i++){
                    if(s1[i]=='A'){
                           a++;
                    }
                    else{
                           d++;
                    }
             }
             if(a>d){
                   cout <<"Anton\n";
             }
             else if(d>a){
                   cout <<"Danik\n";
             }
             else{
                   cout <<"Friendship\n";
             }
  return 0;
}