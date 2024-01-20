#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
              int n; cin >> n;
              int a1[n];
              int count = 0;
              int mn = INT_MIN;
              for(int i=0;i<n;i++) cin >> a1[i];

                if(n==1){
                      cout << 1 << endl;
                      return 0;
                }

                for(int i=1;i<=100;i++){
                       for(int j=0;j<n;j++){
                           if(i == a1[j]){
                               count++;
                           }
                       }
                       mn = max(mn,count);
                       count = 0;
                }
                cout << mn << endl;

     return 0;
}