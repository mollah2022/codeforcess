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
           int n; cin >> n;
            n = n-1;
            string s1; cin >> s1;
            int a = 1,b = 0;
            string s3 = "";
            while(n--){
                   string s2; cin >> s2;
                   if(s1==s2){
                       a++;
                   }
                   else{
                       b++;
                       s3 = s2;
                   }
            }
            if(a>b){
                  cout << s1 << endl;
            }
            else{
                    cout << s3 << endl;
            }
            
  return 0;
}