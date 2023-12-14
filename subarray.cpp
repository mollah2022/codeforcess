#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	       int t; cin >> t;
	       
	       while(t--){
	       	  int n,m; cin >> n >> m;
	       	 deque < int > dq,dq1;
	       	  for(int i=0;i<n;i++){
	       	  	    int y; cin >> y;
	       	  	    dq.push_back(y);
	       	  }
	       	  int v = INT_MAX;
	       	  for(int i=0;i<m;i++){
	       	  	   int v = max(v,dq[i]);
	       	  }
	       	  dq1.push_back(v);
	       	  deque <int > :: iterator it,it1;
	       	  it = dq.begin();
	       	  it1 = dq.begin()+m;
	       	  gq.erase(it,it1);

                
	       }
	return 0;
}