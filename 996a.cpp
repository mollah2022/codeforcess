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
           int cnt = 0;
            cnt += (n/100);
            n = n%100;
            cnt  +=(n/20);
            n = n%20;
            cnt +=(n/10);
            n = n%10;
            cnt +=(n/5);
            n = n%5;
            cnt +=n;
            cout << cnt << endl;
  return 0;
}