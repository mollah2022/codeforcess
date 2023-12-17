#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         int a,b,c; cin >> a >> b >> c;
	         int ans = 0;
	         for(int i=1;i<=a;i++){
	         	   if(b>=i+1 && c>=i+2){
	         	   	  ans = 3*i+3;
	         	   }
	         }
	         cout << ans << endl;
	           

	return 0;
}