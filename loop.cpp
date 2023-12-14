#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
               vector < int > v1;
               int n; cin >> n;
               for(int i=0;i<n;i++){
               	   int y; cin >> y;
               	   v1.push_back(y);
               } 

               reverse(v1.begin(),v1.end());
               for(int i=0;i<v1.size();i++){
               	   cout << v1[i] <<" ";
               }
               cout << endl;
	return 0;
}