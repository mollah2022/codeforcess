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
                       int n,m,x; cin >> n >> m >> x;
                       std::vector<int> v1;
                       v1.push_back(n);
                       v1.push_back(m);
                       v1.push_back(x);
                       sort(v1.begin(),v1.end());
                       cout << v1[1] << endl;
                }
  return 0;
}