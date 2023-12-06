#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	       int t; cin >> t;
	       while(t--){
	       	   int a,b; cin >> a >> b;
	       	    if(a<b){
	       	    	  int ran = b-a;
	       	    	    if(ran%2==0){
	       	    	    	cout << 2 << endl;
	       	    	    }
	       	    	    else{
	       	    	    	cout << 1 << endl;
	       	    	    }
	       	    }
	       	    else if(a>b){
	       	    	  int ans = a-b;
	       	    	  if(ans%2==0){
	       	    	  	   cout << 1 << endl;
	       	    	  }
	       	    	  else{
	       	    	  	  cout << 2 << endl;
	       	    	  }
	       	    }
	       	    else{
	       	    	  cout << 0 << endl;
	       	    }
	       }
	return 0;
}