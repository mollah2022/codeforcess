#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
	     sajib  
	       int t; cin >> t;
	       while(t--){
	       	  int n,x; cin >> n >> x;
	       	  int count = 1;
	       	  int flor = 2;
	       	  if(n <=2 ){
	       	  	  cout << 1 << endl;
	       	  	  continue;
	       	  }
	       	  for(int i=1;i<=n;i++){
	       	  	   flor +=x;
	       	  	   count++;
	       	  	   if(flor>=n){
	       	  	   	  break;
	       	  	   }
	       	  }
	       	  cout << count << endl;
	       }
	return 0;
}