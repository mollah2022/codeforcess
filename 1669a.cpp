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
                    if(n<=1399){
                             cout <<"Division 4\n";
                    }
                    else if( n>=1400 && n<=1599){
                          cout <<"Division 3\n";
                    }
                    else if(n>=1600 && n<=1899){
                           cout <<"Division 2\n";
                    }
                    else{
                           cout <<"Division 1\n";
                    }
               }
  return 0;
}