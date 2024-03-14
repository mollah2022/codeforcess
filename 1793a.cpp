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

                  int a,b; cin >> a >> b;
                  int n,m; cin >> n >> m;

                  if(n<m && a<=b){
                       cout << n*a << endl;
                       continue;
                  }
                  else if(n<m && a>b){
                        cout << n*b << endl;
                        continue;
                  }

                int sum1 = (a*m)+(n-(m+1))*b;
                int sum2 = (b*)
                cout << sum1 << endl;

            }
  return 0;
}