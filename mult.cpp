#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         ll t; cin >> t;
	           while(t--){
	           	   ll n; cin >> n;
	           	   ll count = 0;
                  int found = 0;
	           	   while(n>1){
	           	   	   if(n%6==0){
	           	   	   	    count++;
	           	   	   	    n = n/6;	    
	           	   	   }
	           	   	   else{
	           	   	   	   n = n*2;
	           	   	   	   count++;

	           	   	   }
	           	   }
	           	  if(n==1){
	           	  	   cout << count << endl;
	           	  }
	           	  else{
	           	  	   cout << -1 << endl;
	           	  }
	           	   
	           	   
	           }
	return 0;
}