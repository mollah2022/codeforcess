#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	       int t; cin >> t;
	       while(t--){
	       	   string s1; cin >> s1;
	       	   int l = s1.size();
	       	   for(int i=0;i<s1.size();i++){
	       	   	    if(s1[l-2]=='p' && s1[l-1]=='o'){
	       	   	    	cout <<"FILIPINO\n";
	       	   	    	break;
	       	   	    }
	       	   	    else if(s1[l-4]=='d'&&s1[l-3]=='e'&&s1[l-2]=='s'&&s1[l-1]=='u'){
	       	   	    	cout <<"JAPANESE\n";
	       	   	    	break;
	       	   	    }
	       	   	    else if(s1[l-4]=='m'&&s1[l-3]=='a'&&s1[l-2]=='s'&&s1[l-1]=='u'){
	       	   	    	cout <<"JAPANESE\n";
	       	   	    	break;
	       	   	    }
	       	   	    else{
	       	   	    	cout <<"KOREAN\n";
	       	   	    	break;
	       	   	    }

	       	   }
	       }
	return 0;
}