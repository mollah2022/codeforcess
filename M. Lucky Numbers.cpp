#include<bits/stdc++.h>
using namespace std;

bool is_lucky(int a)
{
	while(a>0)
	{
		int digit=a%10;
		if(!(digit == 4 || digit == 7))
		{
			return false;

		}
		a=a/10;
	}
	return true;
}

int main()
{
	int x, y, i;
	cin >> x >> y;
	bool found=false;
	for(int i = x ; i <= y ; i++)
	{
		if(is_lucky(i))
		{
			cout<<i<<" ";
			found = true;
		}
		
	}
	if(!found)
	{
		cout<<-1<<endl;
	}
	return 0;

}