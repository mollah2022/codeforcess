#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count=0;
	cin >> t;
	while(t--)
	{
		string s1;
		cin >> s1;
	    for(int i=0; i<s1.size();i++)
	    {
	    		if(s1[i]=='1' && s1[i+1]=='0' && s1[i+2]=='1'||s1[i]=='0' && s1[i+1]=='1' && s1[i+2]=='0')
		{
			count=1;
		}

	    }
	    if(count==1)
	    {
	    	cout<<"Good\n";
	    }
	    else
	    {
	    	cout<<"Bad\n";
	    }
	    count=0;
	}
    return 0;
}