#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int n; cin >> n;
             ll sum = 0;
             vector<ll>v1;
             ll mx = 0;
             for(int i=1;i<=n;i++){
                  int a,b,c,d;
                  cin >> a >> b >> c >> d;
                  sum+=(a+b+c+d);
                  //mx = max(mx,sum);
                  v1.push_back(sum);
                  sum = 0;
             }
             mx = v1[0];
             //cout << mx << endl;
             int pos = 0;
             sort(v1.begin(),v1.end());
             reverse(v1.begin(),v1.end());
             //cout << v1[0] << endl;
             for(int i=0;i<v1.size();i++){
                  if(v1[i]==mx){
                      pos = i;
                      break;
                  }
             }
             cout << pos+1 << endl;
            
    return 0;
}