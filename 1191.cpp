#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         int n; cin >> n;
	         int ans = (n%4);
	         if(ans == 1){
	         	  cout << 0 <<" " <<"A\n";
	         }
	         else if(ans == 2){
	         	  cout << 1 <<" " << "B\n";
	         }
	         else if(ans == 3){
	         	   cout << 2 << " " << "A\n";
	         }
	         else{
	         	  cout << 1 << " " << "A\n";
	         }
	return 0;
}