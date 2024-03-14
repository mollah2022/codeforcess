#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
       tst {   
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[2] <= a[0] + a[1])
            cout << (a[0] + a[1] + a[2]) / 2 << endl;
        else
            cout << a[0] + a[1] << endl;
    }
  return 0;
}