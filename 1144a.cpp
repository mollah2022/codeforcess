#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                int h = 0;
                bool found = false;
                  string s1; cin >> s1;
                  sort(s1.begin(),s1.end());
                  for(int i=0;i<s1.size()-1;i++){
                            int a = s1[i]-'0';
                            int b = s1[i+1]-'0';
                            h = abs(a-b);
                            //cout << h << endl;
                            if(h>1 || h<1){
                                  found = true;
                                  break;
                            }
                  }
                  if(found == 1){
                       cout <<"NO\n";
                  }
                  else{
                      cout <<"YES\n";
                  }
             }
    return 0;
}