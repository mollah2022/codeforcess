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
                   int n,k; cin >> n >> k;
                   int l = (n*k);
                 string s1 = "abcdefghijklmnopqrstuvwxyz";
                 string s2 = "";
                    
                   for(int i=0;i<n;i++){
                       for(int j=0;j<k;j++){
                            s2+=s1[j];
                       }
                   }
                   cout << s2 << endl;
              }  
     return 0;
}