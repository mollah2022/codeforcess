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
                       int a,b,c,n; cin >> a >> b >> c >> n;
                      if(a==b && b==c && n%3==0){
                           cout <<"YES\n";
                           continue;
                      }
                      if( a>=b && a>=c ){
                           int  a1 = a-b;
                           int b1 =   a-c;
                           n = (n-(a1+b1));
                             if( n>=0 && n%3==0){
                                  cout <<"YES\n";
                             }
                                  else{
                           cout <<"NO\n";
                           }

                      }
                     else  if(b>=a && b>=c){
                            int  a1 = b-a;
                           int b1 =   b-c;
                           n = (n-(a1+b1));
                             if(n>=0 && n%3==0){
                                  cout <<"YES\n";
                             }
                                 else{
                           cout <<"NO\n";
                           }
                      }
                      else if(c>=a && c>=b){
                             int  a1 = c-b;
                           int b1 =   c-a;
                           n = (n-(a1+b1));
                            if( n>=0 && n%3==0){
                                  cout <<"YES\n";
                             }
                             else{
                           cout <<"NO\n";
                           }
                      }

              }
  return 0;
}