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
                                string s1; cin >> s1;
                                int sum1 = 0, sum2 = 0;
                                for(int i=0;i<3;i++){
                                        int a = s1[i]-'0';
                                        sum1+=a;
                                }
                                 for(int i=3;i<s1.size();i++){
                                        int a = s1[i]-'0';
                                        sum2+=a;
                                }
                               // cout << sum1 << " " << sum2 << endl;
                                if(sum1==sum2){
                                      yes
                                }
                                else{
                                       no
                                }
                      }
  return 0;
}