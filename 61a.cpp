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
             vector<int>v1;
             string s1,s2; cin >> s1 >> s2;
             for(int i=0;i<s1.size();i++){
                   int n = s1[i]-'0';
                   int m = s2[i]-'0';
                 //  cout << n <<" "<<m << endl;
                   int k = (n^m);
                   v1.push_back(k);
             }
             for( auto u : v1){
                   cout << u;
             }
  return 0;
}