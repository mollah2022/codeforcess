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
            int a1[n],a2[n];
            for(int i=0;i<n;i++){
                   int a,b; cin >> a >> b;
                   a1[i]=a;
                   a2[i]=b;
            }
           sort(a1,a1+n);
           sort(a2,a2+n);
           int cnt =0 ;
           for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                       if(a1[i]==a2[j]){
                           cnt++;
                       }
                }
           }
           cout << cnt << endl;
  return 0;
}