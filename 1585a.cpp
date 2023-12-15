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
	           	    for(int i=0;i<n;i++) cin >> a1[i];
	           	    	int ans = 1;
	           	    bool h = false;
	           	    for(int i=0;i<n;i++){
	           	    	 if(a1[i]==1 && a1[i-1]==1){	           	    	  	    
	           	    	  	     	  ans+=5;          	    	  	     
	           	    	  }
	           	    	 else if(a1[i]==1){
	           	    	  	  ans+=1;
	           	    	  }          
	           	    	  else if(a1[i]==0 && a1[i+1]==0){
	           	    	  	      h = true;
	           	    	  	      break;
	           	    	  }
	           	    }
	           	    if(h==1){
	           	    	cout <<-1<<endl;
	           	    }
	           	    else{
	           	    	cout << ans << endl;
	           	    }
	           }
	return 0;
}