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
             int n,m; cin >> n >> m;
             int array[n];
             for(int i=0;i<n;i++) cin >> array[i];
             int value = array[m-1];
            int count = 0;
             for(int i=0;i<n;i++){
                if(array[i]>=value && array[i]!=0){
                       count++;
                }
         }
         cout << count << endl;
  return 0;
}