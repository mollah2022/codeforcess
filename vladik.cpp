#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	     int n,m; cin >> n >> m;
	     int i=1;
	     while(1){
	     	  if(i>n){
	     	  	 cout <<"Vladik\n";
	     	  	// cout <<"Valera\n";
	     	  	 return 0;
	     	  }
	     	  else{
	     	  	  n=n-i;
	     	  	  i++;
	     	  }

	     	  if(i>m){
	     	  	  cout <<"Valera\n";
	     	  	  //cout <<"Vladik\n";
	     	  	  return 0;
	     	  }
	     	  else{
	     	  	m=m-i;
	     	  	i++;
	     	  }
	     }
           
	return 0;
}