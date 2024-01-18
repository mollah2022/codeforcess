#include <bits/stdc++.h>
using namespace std;

int main() {
	  int t; cin >> t;
	  while(t--){
	      
	      int n; cin >> n;
	      string s1,s2="";
	      cin >> s1;
	      for(int i=0;i<s1.size();i++){
	      	   if(s1[i]>s1[i+1]){
	      	   	  s1.erase(s1.begin()+i);
	      	   	  break;
	      	   }
	      }

	      cout << s1 << endl;
	  }
	  
return 0;
}
