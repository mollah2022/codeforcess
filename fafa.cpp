#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	       int n; cin >> n;
	       int sum = 0;
	       for(int i=1;i<n;i++){
	       	   if(n%i==0){
	       	   	    sum++;
	       	   }
	       }
	       cout << sum << endl;
	return 0;
}