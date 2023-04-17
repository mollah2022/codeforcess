#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long int t,result=0;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		long long int counter=0;
		long long int num;
		cin >> num;
		if(num%2!=0)
		{
			counter=0;
		}
		else
		{
			while(num>0)
			{
				if(num%2!=0)
				{
					break;
				}
				else
				{
					counter++;
					num/=2;
				}
			}
		}
		if(counter>result)
		{
			result=counter;
		}
	}
	cout<<result<<endl;
	return 0;
}