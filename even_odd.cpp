#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         int t; cin >> t;
	         while(t--){
	         	    int n; cin >> n;
	         	    int a1[n];
	         	    vector < int > v1;
	         	    for(int i=0;i<n;i++) cin >> a1[i];
	         	    	bool ria = false;
	         	    	for(int i=0;i<n;i=i+2){
	         	    		  if(a1[i]%2 != a1[0]%2){
	         	    		  	  ria = true;
	         	    		  	  break;
	         	    		  }
	         	    	}
	         	    	for(int i=1;i<n;i=i+2){
	         	    		  if(a1[i]%2 != a1[1]%2){
	         	    		  	  ria = true;
	         	    		  	  break;
	         	    		  }
	         	    	}
	         	    	if(ria == 1){
	         	    		  cout<<"NO\n";
	         	    	}
	         	    	else{
	         	    		cout <<"YES\n";
	         	    	}
	         }
	return 0;
}