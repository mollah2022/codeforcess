#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
            int n; cin >> n;
            if(n==0){
                cout << 0 << endl;
            }
            else if(n%2==0){
                cout << n+1 << endl;
            }
            else{
                cout << (n+1)/2 << endl;
            }
  return 0;
}