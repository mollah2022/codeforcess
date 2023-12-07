#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	        ll n; cin >> n;
	        ll ans = 0 ,sum = 0,count = 0;
	         for(ll i=1;i<=n;i++){
                    sum +=i;
                    ans +=sum;               
                    if(ans>n){
                    	   break;
                    }
                       count++;
	         }
	         cout << count << endl;
	return 0;
}