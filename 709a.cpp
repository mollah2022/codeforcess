//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
            ll n,b,d; cin >> n >> b >> d;
            ll a1[n];
           // vector < int > v1;
            ll sum = 0;
            int count = 0;
            for(int i=0;i<n;i++){
                cin >> a1[i];
                if(a1[i]<=b){
                      sum+=a1[i];
                }
                if(sum>d){
                      count++;
                      sum = 0;
                }
            }
          
      cout << count << endl;
  return 0;
}