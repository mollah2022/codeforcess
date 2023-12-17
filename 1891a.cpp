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
	         	   bool h = false;
	         	   for(int i=0;i<n;i++) cin >> a1[i];
	                 for(int i=0;i<n-1;i++){
	                 	   if(a1[i+1]<a1[i]){
	                 	   	   if(((i+1)&i)!=0){
	                 	   	   	h = true;
	                 	   	   	   cout <<"NO\n";
	                 	   	   	   break;
	                 	   	   }
	                 	   }
	                 } 
                  if(h==0){
                  	  cout << "YES\n";
                  }        	   
	         }
	return 0;
}