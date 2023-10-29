#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	          int t; cin >> t;
	          while(t--){
	          	    ll n; cin >> n;
	          	    vector < ll > v1;
	          	    for(ll i=1;i<=n;i++){
	          	    	ll p = pow(2,i);
	          	    	v1.push_back(p);
	          	       }

                    ll lenght = v1.size();
	          if(lenght <= 2){
	          	  cout << v1[1]-v1[0] << endl;
	          	  continue;
	             }
                ll sum1=0,sum2=0;
                int b = lenght/2-1;
	             for(int i=lenght-2;i>=b;i--){
	             	sum1+=v1[i];
	             	//cout << v1[i] <<" ";
	             }
	              for(int i=0;i<lenght/2-1;i++){
	             	sum2+=v1[i];
	             	//cout << v1[i] <<" ";
	             }
	            //cout << sum1 << endl << sum2+v1[lenght-1] << endl;
	             sum2+=v1[lenght-1];
	             cout << abs(sum2-sum1) << endl;
	         
	       }

	return 0;
}