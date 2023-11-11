#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	          int n,m; cin >> n >> m;
	          vector < int > v1;
	          for(int i=0;i<n;i++){
	          	   int y; cin >> y;
	          	   v1.push_back(y);
	          }
	          sort(v1.begin(),v1.end());
	          //reverse(v1.begin(),v1.end());
	          int sum = 0;

              for(int i=0;i<m;i++){
              	    if(v1[i] <= 0){
              	    	sum+=v1[i];
              	    }
              }
           cout << abs(sum) << endl;
	return 0;
}