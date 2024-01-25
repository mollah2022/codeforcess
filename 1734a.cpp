#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            tst{
                   int n; cin >> n;
                   int a1[n];
                   for(int i=0;i<n;i++) cin >> a1[i];
                    sort(a1,a1+n);
                int mn = INT_MAX;
                   for(int i=0;i<n-2;i++){
                         int ans1 = (a1[i+2]-a1[i+1]);
                         int ans2 = (a1[i+1]-a1[i]);
                   //cout << (ans1+ans2) << endl;
                         int ans = (ans1+ans2);
                         mn = min(mn,ans);
                   }
                   cout << mn << endl;
            } 
     return 0;
}