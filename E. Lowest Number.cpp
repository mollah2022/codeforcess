#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,mini=0,i,found=0;
	cin >> x;
	int s1[x];
	for( i =0;i < x;i++)

	{
		cin >> s1[i];
	}
	 mini = s1[0];

	for( i=0 ;i < x;i++)
	{
		if(s1[i]<mini)
		{
			mini = s1[i];
		}
	}
	cout<<mini<<" ";
	for(int i =0;i < x;i++)
	{
		if(s1[i]==mini)
		{
			cout<<i+1<<endl;
			break;
		}
	}
	return 0;
}