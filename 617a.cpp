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
             int n; cin >> n;
             int count = 0;
             while(n!=0){
                count ++;
                    if(n>=5){
                          n=n-5;
                    }
                    else if(n>=4 && n<5){
                         n=n-4;
                    }
                     else if(n>=3 && n<4){
                         n=n-3;
                    }
                     else if(n>=2 && n<3){
                         n=n-2;
                    }
                    else{
                          n=n-1;
                    }
             }
             cout << count << endl;
  return 0;
}