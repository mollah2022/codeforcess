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
                        int n,m; cin >> n >> m;
                        int a1[n],a2[n];
                        for(int i=0;i<n;i++){
                              cin >> a1[i];
                        }
                        for(int i=0;i<n;i++){
                               cin >> a2[i];
                        }
                        sort(a1,a1+n);
                        sort(a2, a2 + n, greater<int>());
                        for(int i=0;i<m;i++){
                               if(a1[i]<a2[i]){
                                   swap(a1[i],a2[i]);
                               }
                        }
                        int result = 0;
                         for(int i=0;i<n;i++){
                               result+=a1[i];
                        }
                        cout << result << endl;
               }
  return 0;
}