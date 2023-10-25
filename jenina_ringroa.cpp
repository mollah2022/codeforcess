#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
	     sajib 
	        int t; cin >> t;
	        while(t--){
	              bool ria = false;
	             int n; cin >> n;
	             int ans = 0,sol = 0,count = 0;
	             for(int i=1;i<=9;i++){
	             	        ans = 0;
	             	  for(int j=1;j<=4;j++){
	             	  	   ans = (ans*10)+i;
	             	  	   sol+=j;
	             	  	    //cout << ans << endl;
	             	  	   if(ans == n){
	             	  	   	   ria = true;
	             	  	   	  break;
	             	  	   }
	             	  }
	             	  if(ria == true){break;}
	             }  
	             cout << sol << endl; 
	        }          

	return 0;
}