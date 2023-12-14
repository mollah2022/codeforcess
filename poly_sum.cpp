#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	       int t; cin >> t;
	       while(t--){
	       	    int n = 7;
	       	    int a1[n];
	       	    for(int i=0;i<n;i++) cin >> a1[i];
	       	    	vector < int > v1;
	       	    int mx = INT_MIN;
	       	      for(int i=0;i<n;i++){
	       	      	  mx = max(mx,a1[i]);
	       	      }
	       	      for(int i=0;i<n;i++){
	       	      	  if(a1[0]+a1[i+1]+a1[i+2]==mx){
	       	      	  	 v1.push_back(a1[0]);
	       	      	  	 v1.push_back(a1[i+1]);
	       	      	  	 v1.push_back(a1[i+2]);
	       	      	  	 break;
	       	      	  }
	       	      	  else   if(a1[0]+a1[1]+a1[i+2]==mx){
	       	      	  	 v1.push_back(a1[0]);
	       	      	  	 v1.push_back(a1[1]);
	       	      	  	 v1.push_back(a1[i+2]);
	       	      	  	 break;
	       	      	  }
	       	      }
	       	      for(int i=0;i<v1.size();i++){
	       	      	  cout <<v1[i]<<" ";
	       	      }
	       	      cout << endl;
	       }
	return 0;
}