#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	        int t; cin >> t;
	          while(t--){
	          	  int n; cin >> n;
	          	     int a1 = n-1;
	          	     int a2 = n+1;
	          	     if(a1%3==0 || a2%3==0){
	          	     	  cout <<"First\n";
	          	     }
	          	     else{
	          	     	  cout <<"Second\n";
	          	     }
	          }
	return 0;
}