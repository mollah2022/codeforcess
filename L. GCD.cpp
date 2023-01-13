#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,i,temp=0,gcd=0;
	cin>>n1>>n2;
	if(n1>n2)
	{
		temp=n1;
		n1=n2;
		n2=temp;
	}
	for(i=1;i<=n1;i++)
	{
		if(n2%i==0 && n1%i==0)
		{
			gcd=i;
		}
	}
	cout<<gcd<<endl;
	return 0;
}