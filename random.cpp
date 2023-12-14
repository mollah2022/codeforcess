#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	        int t; cin >> t;
	         deque < int > dq;
	        while(t--){
	        	   int a,b; cin >> a >> b;
	        	     deque <int> :: iterator it;
	        	     if(a==0){
	        	     	  dq.push_front(b);
	        	     	  for(int i=0;i<dq.size();i++){
	        	     	  	   cout << dq[i] << " ";
	        	     	  }
	        	     	  cout << endl;
	        	     }
	        	     else if(a==1){
                             dq.push_back(b);
	        	     	  for(int i=0;i<dq.size();i++){
	        	     	  	   cout << dq[i] << " ";
	        	     	  }
	        	     	  cout << endl;

	        	     }
	        	     else{
	        	     	  if(dq.size()>b){
                                   it = dq.begin()+b;
	        	     	   dq.erase(it);
	        	     	   for(int i=0;i<dq.size();i++){
	        	     	   	    cout << dq[i] <<" ";
	        	     	   }
                         cout << endl;

	        	     	  }
	        	     	  else{
	        	     	  	     for(int i=0;i<dq.size();i++){
	        	     	  	     	  cout << dq[i] <<" ";
	        	     	  	     }
	        	     	  	     cout << endl;
	        	     	  }
	        	     }

	        }
	return 0;
}