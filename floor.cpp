#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib  
	        int n,m; cin >> n >> m;
	        if(m>n){
	        	cout <<"No\n";
	        	return 0;
	        }
	        int ans = (n-m);
	        if(ans <= 3){
	        	cout <<"Yes\n";
	        }
	        else{
	        	cout <<"No\n";
	        }
	return 0;
}