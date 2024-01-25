#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST 
              int a,b,c,d; cin >> a >> b >> c >> d;
               vector < int > v1;
               v1.push_back(a);
               v1.push_back(b);
               v1.push_back(c);
               v1.push_back(d);

               sort(v1.begin(),v1.end());

               if(v1[0]+v1[1]>v1[2] || v1[1]+v1[2]>v1[3]){
                    cout <<"TRIANGLE\n";
               }
               else if(v1[0]+v1[1]==v1[2] || v1[1]+v1[2]==v1[3]){
                    cout <<"SEGMENT\n";
               }
               else{
                   cout << "IMPOSSIBLE\n";
               }
     return 0;
}