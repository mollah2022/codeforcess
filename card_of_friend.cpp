#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	        int t; cin >> t;
	          while(t--){
	             ll w,h,n; cin >> w >> h >> n;
	               if(n==1){
	               	   cout <<"YES\n";
	               	   continue;
	               }
	               ll ans = 1;
	               while(w%2==0){
	               	   ans*=2;
	               	   w = w/2;
	               }

	                 while(h%2==0){
	               	   ans*=2;
	               	   h = h/2;
	               }
	             
	             // cout << ans << endl;
	             
	               if(ans >= n){
	               	  cout <<"YES\n";
	               }
	               else{
	               	  cout <<"NO\n";
	               }
	        	 
	        }
	return 0;
}