#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	        int t; cin >> t;
	        while(t--){
	        	  string s1; cin >> s1;
	        	  int p = s1.size();
	        	  int  l = p/2;
	        	  if(p%2!=0){
	        	  	  cout <<"NO\n";
	        	  	  continue;
	        	  }
                   int found = 0;
                    for(int i=0;i<l;i++){
                    	  if(s1[i]!=s1[l+i]){
                    	  	  found = 1;
                    	  	  break;
                    	  }
                    }
                    if(found == 1){
                    	  cout << "NO\n";
                    }
                    else{
                    	cout << "YES\n";
                    }
	        }
	return 0;
}