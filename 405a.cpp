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
                int a1[n];
                for(int i=0;i<n;i++) cin >> a1[i];
                    sort(a1,a1+n);
                for(int i=0;i<n;i++){
                       cout << a1[i] <<" ";
                }
                cout << endl;
  return 0;
}