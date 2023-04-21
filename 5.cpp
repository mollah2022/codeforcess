#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	 int t,sum=0,count=0;
	cin >> t;
	while(t--)
	{
		 int x,i=1;
		cin >> x;
	    int sum=0,count=0;
	    while(sum<x)
	    {
	    	count++;
	    	sum+=i;
	    	i+=2;
	    }
	    cout<<count<<endl;
	}
	return 0;
}