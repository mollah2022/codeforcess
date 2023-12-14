#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         int t; cin >> t;
	         while(t--){
	         	vector < int > v1;
	         	   int n; cin >> n;
	         	   if(n==1){
	         	   	   cout << 1 << endl;
	         	   	   continue;
	         	   }
	         	   else if(n==2){
	         	   	   cout << 2 << endl;
	         	   	   continue;
	         	   }
	         	   else if(n==3){
	         	   	   cout << 3<< endl;
	         	   	   continue;
	         	   }
	         	   else if(n==4){
	         	   	   cout << 4 << endl;
	         	   	   continue;
	         	   }
	         	   else if(n==5){
	         	   	   cout << 5 << endl;
	         	   	   continue;
	         	   }
	         	   else if(n==6){
	         	   	   cout << 6 << endl;
	         	   	   continue;
	         	   }
	         	   else if(n==7){
	         	   	   cout << 7 << endl;
	         	   	   continue;
	         	   }
	         	   else if(n==8){
	         	   	   cout << 8 << endl;
	         	   	   continue;
	         	   }
	         	   else if(n==9){
	         	   	   cout << 9 << endl;
	         	   	   continue;
	         	   }
	         	 
                     int ans = 0;
	         	   for(int i=9;i>0;i--){
	         	   	    ans+=i;
	         	   	    if(ans <= n){
	         	   	    	v1.push_back(i);
	         	   	    	 //break;
	         	   	    }
	         	   	    else{
	         	   	    	  ans = ans -i ;
	         	   	    }

	         	   }
	         	   reverse(v1.begin(),v1.end());
	         	   for(int i=0;i<v1.size();i++){
	         	   	   cout << v1[i];
	         	   }
	         	   cout << endl;
	         }
	return 0;
}