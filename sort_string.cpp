#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int main(){
	     sajib 
	       int n; cin >> n;
	          while(n--){
	          	  string s1,s2; cin >> s1;
	          	  for(int i=0;i<s1.size();i++){
	          	  	   if(i%2==0){
	          	  	   	  s2+=s1[i];
	          	  	   }
	          	  }
	          	  int l = s1.size();
	          	  s2+=s1[l-1];
	          	  cout << s2 << endl;
	          }
	return 0;
}