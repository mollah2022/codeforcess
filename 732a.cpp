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
                int n,m; cin >> n >> m;
                int a = 0,b=0;
                while(true){
                       b =b+m;
                              if(b%n==0){
                                      cout <<b/n<<endl;
                                      break;
                                  }
                             a =a+10;
                              if(a%n==0){
                                      cout <<a/n<<endl;
                                      break;
                                  }
                            m = m+10;
                       if(m%n==0){
                           cout << m/n << endl;
                           break;
                       }
                }
  return 0;
}