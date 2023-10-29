#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	        int t,i; cin >> t;
	        while(t--){
	        	bool ria = false;
	        	int p = 0;
	        	string s1; cin >> s1;
	        	char ch; cin >> ch;
	        	for( i=0;i<s1.size();i++){
	        		  if(s1[i]==ch && i%2==0){
	        		  	   ria = true;
	        		  	   p = i;
	        		  	   break;
	        		  }
	        	}
	        	if(i%2==0){
	        		cout <<"YES\n";
	        	}
	        	else{
	        		 cout <<"NO\n";
	        	}
	        }  
	return 0;
}