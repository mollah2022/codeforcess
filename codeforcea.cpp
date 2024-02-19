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
                int n; cin >> n;
                string s1; cin >> s1;
                int count = 0;
                for(int i=0;i<n;i++){
                    if(s1[i]=='*' && s1[i+1]=='*'){
                         break;
                    }
                    else if(s1[i]=='@'){
                          count++;
                    }
                }
                cout << count << endl;
             }

  return 0;
}