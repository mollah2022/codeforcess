#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
            int t; cin >> t;
            while(t--){
                   int n; cin >> n;
                   string s1; cin >> s1;
                   bool h = false;          
                    string x = "FBFFBFFBFBFFBFFBFB";

                  if (x.find(s1) != string::npos)
                          cout << "YES\n";
                    else
                  cout << "NO\n";
            }
    return 0;
}