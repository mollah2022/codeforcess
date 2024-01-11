#include <bits/stdc++.h>
using namespace std;

int main() {
	     int t; cin >> t;
	     while(t--){
	            int n,m; cin >> n >> m;
	            int a1[n],a2[m];
	            for(int i=1;i<=n;i++){
	                  cin >> a1[i];
	            }
	            for(int i=1;i<=m;i++){
	                  cin >> a2[i];
	            }
	            reverse(a1,a1+n);
	            int count = 0;
	             for(int i=1;i<n;i++){
	                  int k = a2[i];
	                  int temp = a1[1];
	                  a1[1]=a1[k];
	                  a1[k]=temp;
	                  count++;
	                  if(count==m){
	                  	break;
	                  }

	            }
	            reverse(a1,a1+n);
	           
	            for(int i=1;i<=n;i++){
	                 cout << a1[i] <<" ";
	            }
	            cout << endl;
	     }

}
