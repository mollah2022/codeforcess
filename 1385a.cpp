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
                       std::vector<int> v1;
                       int a,b,c; cin >> a >> b >> c;
                       v1.push_back(a);
                       v1.push_back(b);
                       v1.push_back(c);
                       sort(v1.begin(),v1.end());
                       if(v1[1]!=v1[2]){
                            cout <<"NO\n";
                       }
                       else{
                              cout <<"YES\n";
                              cout << v1[0]<<" "<<v1[0]<<" "<<v1[2]<<endl;
                       }
              }
  return 0;
}