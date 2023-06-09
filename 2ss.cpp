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
    	int x,y,temp,rem;
    	cin >> x >> y;
    	int sum = (x*y);

    	int num = sum;
    	while(sum>0)
    	{
    		temp = sum%10;
    		if(temp!=0)
    		{
               count++;
    		}
    		sum=sum/10;

    	}

    	if(count==5)
    	{
    		cout << "YES\n";
    	}
    	else
    	{
    		cout << "NO\n";
    	}
    	count=0;
    }
   return 0;
}