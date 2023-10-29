#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	     int t; cin >> t;
	     while(t--){
	     	bool ria = false;
	     	int sum = 0;
	     	  int n,m; cin >> n >> m;
	     	  int a1[n]; 
	     	  for(int i=1;i<=n;i++) cin >> a1[i];
	     	  	sort(a1,a1+n);
	     	  	for(int i=1;i<=n;i++){
	     	  		for(int j=i+1;j<=n;j++){
	     	  			for(int k = j+1;k<=n;k++){
	     	  				sum+=(j+k);
	     	  				   if(sum>=m){
	     	  				   	   ria = true;
	     	  				   	   break;
	     	  				   }

	     	  			}
	     	  		}
	     	  	}
	     	  	if(ria == 0){
	     	  		  cout <<"NO\n";
	     	  	}
	     	  	else{
	     	  		cout << "YES\n";
	     	  	}
	     }
	return 0;
}