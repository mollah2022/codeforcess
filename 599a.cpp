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
            ll d1,d2,d3; cin >> d1 >> d2 >> d3;
            ll sum1 = 0,sum2=0,sum3=0;
            if(d1==d2 && d2==d3){
                cout << d1+d2+d3 << endl;
                return 0;
            }
            if(d1<=d2){
                 sum1+=d1;
                 if(d1+d2<=d3){
                    sum1+=d1+d2+d2;
                 }
                 else if(d2<d3){
                     sum1+=d3+d2;
                 }
                 else{
                    sum1+=d1+(2*d3);
                 }
            }
           
            else if(d2<d1){
                sum1 = 0;
                   sum1+=d2;
                   if(d1+d2<=d3){
                      sum1+=d1+d2+d1;
                   }
                   else if(d1<d3){
                      sum1+=d1+d3;
                   }
                   else{
                      sum1+=d2+(d3*2);
                   }
            }

            else {
                  sum1 = 0;
                    if(d3<d1){
                         sum1+=(2*d2)+(2*d3);
                    }
                    else if(d3<d2){
                         sum1+=(2*d1)+(2*d3);
                    }
                  else{
                    sum1+=d1+d2+d3;
                  }
            }
           cout << sum1 << endl;
  return 0;
}