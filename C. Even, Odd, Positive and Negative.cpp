#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,e=0,o=0,p=0,n=0;
	cin>>x;
	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin>>s1[i];
		if(s1[i]%2==0)
		{
                e++;
		}
		else
		{
			o++;
		}
		
	}
	cout<<"Even: "<<e<<endl;
	cout<<"Odd: "<<o<<endl;
	for(int i=0;i<x;i++)
	{
		
		if(s1[i]>0)
		{
          p++;
		}
		else if(s1[i]<0)
		{
			n++;
		}
	}
	cout<<"Positive: "<<p<<endl;
	cout<<"Negative: "<<n<<endl;
	return 0;
}