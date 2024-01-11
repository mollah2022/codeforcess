#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            string s1; cin >> s1;
            int count = 0,rem=0;
            //cout << l << endl;
            int n = s1.size();
            for(int i=0;i<s1.size();i++){
                  if(s1[i]=='a'){
                      count++;
                  }
            }   
            int nem = (2*count)-1;
            cout << min(n,nem) << endl;

     return 0;
}