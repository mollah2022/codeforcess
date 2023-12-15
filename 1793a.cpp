#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	        int t; cin >> t;
	        while(t--){
	        	   ll a,b; cin >> a >> b;
	        	   ll n,m; cin >> n >> m;
	        	   ll sum = 0, ans = 0,noton = 0;
	        	   if(n>m){
	        	   	       sum+=(a*m);
	        	   	       noton = n-(m+1);
	        	   	       	    sum+=(b*noton);    
	        	   	       
	        	   }
	        	   else{
	        	   	      
	        	   	      	  sum+=(a*n);
	        	   	      
	        	   	      
	        	   }
	        	   cout << sum << endl;
	        	   sum = 0;
	        }
	return 0;
}