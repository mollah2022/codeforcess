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
                            int a,b,c,d; cin >> a >> b >> c >> d;
                            string s1="";
                            for(int i=1;i<=12;i++){
                                   if(i==a || i==b){
                                        s1+="a";
                                   }
                                    if(i==c || i==d){
                                      s1+="b";
                                   }
                            }
                            if(s1=="abab" || s1=="baba"){
                                   yes
                            }
                            else{
                                no
                            }
                    }
  return 0;
}