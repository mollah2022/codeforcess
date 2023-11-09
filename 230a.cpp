#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         int s,m; cin >> s >> m;
	         int sum1 = 0,sum2 = 0;
	         bool p = false;
	         int a,b;
	         while(m--){
	         	cin >> a >> b;
                  if(a > s){
                  	     sum1++;
                  }
                  else{
                  	      s+=b;
                  	      sum2++;
                  }
	         }
	         if(s > a || sum2 >= sum1 ){cout <<"YES\n";
	     }
	     else{
	     	cout <<"NO\n";
	     }

	              
	return 0;
}