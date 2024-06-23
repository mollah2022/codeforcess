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
             int mx = INT_MIN;
             int mn = INT_MAX;
             for(int i=0;i<n;i++){
                   cin >> a1[i];
                   mx = max(mx,a1[i]);
                   mn = min(mn,a1[i]);
             }
             int p = 0;
             for(int i=0;i<n;i++){
                  if(mx == a1[i]){
                        p += i;
                        break;
                  }
             }
             int q = 0;
             //reverse(a1,a1+n);
             for(int i=0;i<n;i++){
                  if(a1[i]==mn){
                       q = i;
                       //break;
                  }
             }
      if(p>q){
           cout << (p-1)+(n-q)-1<<endl;
      }
      else{
           cout <<(p-1)+(n-q) << endl;
      }
  return 0;
}