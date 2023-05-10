#include<bits/stdc++.h>
using namespace std;

bool sajib(int x)
{
	if(x%2==0)
	{
         return true;
	}
	else
	{
		return false;
	}
}
bool  decimal_to_binary(int x)
{
	int rem=0;
	string s1,s2;
	while(x)
	{
		rem=x%2;
		x/=2;
		if(rem==0)
		{
			s1+="0";
		}
		else
		{
			s1+="1";
		}
	}
	s2=s1;
	reverse(s2.begin(),s1.end());
	if(s1==s2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long int x;
	cin >> x;
	
    if(sajib(x))
    {
    	cout<<"NO\n";
    }
    else
    {
    	if(decimal_to_binary(x))
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
    }
    return 0;
}