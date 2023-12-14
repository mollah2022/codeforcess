#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         int t; cin >> t;
	         while(t--){
	         	int count1 = 0,count2 =0;
	         	  int n; cin >> n;
	         	  int a1[n];
	         	  for(int i=0;i<n;i++){
	         	  	    cin >> a1[i];
	         	  }
	         	  int even = 0,odd = 0;
	         	  for(int i=0;i<n;i++){
                        if(i%2!= a1[i]%2){
                        	if(a1[i]%2==1){
                        		  odd++;
                        	}
                        	else{
                        		even++;
                        	}
                        }
	         	  }
	         	  if(even!=odd){
	         	  	  cout << -1 << endl;
	         	  }
	         	  else{
	         	  	 cout << even << endl;
	         	  }
	         }
	return 0;
}