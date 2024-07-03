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
                 vector<int >v1;
                 while(n>0){
                       int p = n%2;
                       v1.push_back(p);
                       n = n/2;
                 }
                 int cnt = 0;
                 for(int i=0;i<v1.size();i++){
                        if(v1[i]==0){
                              cnt++;
                        }
                        else{
                            break;
                        }
                 }
                 cout << cnt << endl;
  return 0;
}