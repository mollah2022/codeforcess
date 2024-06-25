//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

char lowercase(char ch){
        return (ch=='c' || ch=='o' || ch=='d' || ch=='r' || ch=='e' || ch=='f' || ch=='o' || ch=='c' || ch=='e' || ch=='s');
}

int32_t main(){
           FAST()
              tst{
                      char ch; cin >> ch;
                      if(lowercase(ch)) cout << "YES\n";
                      else cout << "NO\n";
              }  
  return 0;
}