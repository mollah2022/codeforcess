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
                     if(n==1){
                           cout <<"##";
                           cout <<"##\n";
                           continue;
                     }
                     if(n%2==0){
                               for(int i=1;i<=n;i++){
                                   cout <<"##..";
                                   cout <<"##.."
                               }
                     }
              }
  return 0;
}