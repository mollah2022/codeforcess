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
                    int n; cin >> n;
                    int a1[n];
                    for(int i=0;i<n;i++) cin >> a1[i];
                    int find = 0;
                    int a2[n];
                    for(int i=0;i<n;i++){
                          a2[i]=a1[i];
                    }
                    sort(a2,a2+n);
                  for(int i=0;i<n-1;i++){
                        if(a2[i] == a2[i+1]) {
                              find = a2[i];
                              break;
                        }
                  }
                  for(int i=0;i<n;i++){
                       if(find!=a1[i]){
                            cout << i+1 << endl;
                            break;
                       }
                  }
             }
  return 0;
}