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
                 int cnt = 0;
                 int a,b,c,d; cin >> a >> b >> c >> d;
                 int a1[3];
                   a1[0]=b;
                   a1[1]=c;
                   a1[2]=d;
                   for(int i=0;i<3;i++){
                        if(a<a1[i]){
                               cnt++;
                        }
                   }
             cout << cnt << endl;
        }
  return 0;
}