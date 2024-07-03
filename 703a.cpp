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
               int first = 0,second = 0;
               for(int i=0;i<n;i++){
                     int a,b; cin >> a >> b;
                     if(a>b){
                          first++;
                     }
                     else if(b>a){
                          second++;
                     }
               }
               if(first > second){
                     cout <<"Mishka\n";
               }
               else if(first<second){
                     cout <<"Chris\n";
               }
               else{
                   cout <<"Friendship is magic!^^\n";
               }
  return 0;
}