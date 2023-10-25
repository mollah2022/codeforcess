#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
	     sajib  
	         int n,m; cin >> n >> m;
	         int mal = (n*m);
	         int mn = min(n,m);
	         if(n==1 || m==1){
	         	cout <<"Akshat\n";
	         	return 0;
	         }
	         if(mal%2==0 && mn%2==0){
	         	 cout <<"Malvika\n";
	         }
	         else{
	         	cout <<"Akshat\n";
	         }
	return 0;
}