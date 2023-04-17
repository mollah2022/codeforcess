#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int x,y,sum=0;
		cin >> x >> y;
	    long long int ma=max(x,y);
	   long long int mi=min(x,y);
	    mi--;
	    long long r1=((mi*(mi+1))/2);
	    long long r2=((ma*(ma+1))/2);
	    cout<<r2-r1<<endl;
	    r1=0,r2=0;
	}
	return 0;
}