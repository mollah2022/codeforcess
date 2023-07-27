#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int x,y,z,count=1; cin >> x >> y >> z;
	    int s = (y+z);
	    if(x > s)
	    {
	    	cout << s+(s+1) << endl;
	    }
	    else
	    {
	    	cout << x+(x-1) << endl;
	    }
	}
	return 0;
}