#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	int s1[10];
	for(i=0;i<10;i++)
	{
		cin>>s1[i];
	}
	int max=s1[0];
	int mini=s1[0];
	int p=0,k=0;
	for(i=0;i<10;i++)
	{
		if(s1[i]>max)
		{
			max=s1[i];
			p++;
		}
		if(s1[i]<mini)
		{
			mini=s1[i];
			k++;
		}
	}
	cout<<"HIGHT = "<<max<<endl<<"POSITION = "<<p+1<<endl;
	cout<<"LOWEST = "<<mini<<endl<<"POSITION = "<<k+1<<endl;
	return 0;
}