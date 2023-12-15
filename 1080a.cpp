#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         int n,m; cin >> n >> m;
	         double red = ceil((double)n*2/m);
	         double green = ceil((double)n*5/m);
	         double blue = ceil((double)n*8/m);
	         int ans = (red+green+blue);
	         cout << ans << endl;
	return 0;
}