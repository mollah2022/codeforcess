#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	       int t; cin >> t;
	       while(t--){
	       	    bool f = false;
	       	   int n; cin >> n;
	       	   int a1[n];
	       	   vector < int > v1;
	       	   int emni = 0;
	       	   for(int i=0;i<n;i++) cin >> a1[i];
	       	   	string s1; cin >> s1;
	       	   for(int i=0;i<n;i++){
	       	   	    for(int j=i+1;j<n;j++){
	       	   	    	  if(a1[i]==a1[j]){
	       	   	    	  	  if(s1[i]!=s1[j]){
	       	   	    	  	  	   f = true;
	       	   	    	  	  	   //cout << s1[i] <<" " << s1[j] << endl;
	       	   	    	  	  	   break;
	       	   	    	  	  }
	       	   	    	  }
                       }
	       	   	    }
                     if(f == true){cout <<"NO\n";}
	       	   else{cout << "YES\n";}

	       	   }
	       	   
return 0;
}