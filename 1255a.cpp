#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST 
              tst{
                    int n,m; cin >> n >> m;
                    int mn = abs(n-m);
                    int count = 0,temp=1;
                    while(mn>0){
                          if(mn>=5){
                        count += mn/5;
                        mn = mn%5;
                    }
                    else if(mn>=2){
                        count+=mn/2;
                        mn = mn%2;
                    }
                    else if (mn>=1){
                        count+=mn/1;
                        mn = mn%1;
                    }
            }
              cout << count << endl;
    }  
     return 0;
}