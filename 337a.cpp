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
                int n,m; cin >> n >> m;
                int a1[m];
                for(int i=0;i<m;i++) cin >> a1[i];
                    int mn = INT_MAX;
                for(int i=0;i<m/n;i++){
                    int cnt = 0;
                    int mx = INT_MIN;
                    int mn1 = INT_MAX;
                        for(int j=i;j<m;j++){
                                    cnt++;
                                     mx = max(mx,a1[j]);
                                     mn1 = min(mn1,a1[j]);
                                    if(cnt == n){
                                          break;
                                    }
                        }
                        cout << mx <<" " << mn1<<endl;
                     int res = mx-mn1;
                     mn = min(mn,res);
                }
                 cout << mn << endl;
  return 0;
}