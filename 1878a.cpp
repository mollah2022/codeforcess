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
                           int a1[n];
                           bool find = false;
                           for(int i=0;i<n;i++) cin >> a1[i];
                            for(int i=0;i<n;i++){
                                   if(a1[i]==m){
                                       find = true;
                                        cout << "YES\n";
                                        break;
                                   }
                            }
                           if(find==0){
                               cout << "NO" << endl;
                           }
                }
  return 0;
}