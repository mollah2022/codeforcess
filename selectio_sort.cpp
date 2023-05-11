#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,min=0,i,j,temp=0;
	cin >> x;

	int s1[x];
	for( i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	for( i=0;i<x-1;i++)
	{
       min=i;
       for(j=i+1;j<x;j++)
       {
       	  if(s1[j]<s1[min])
       	  {
       	  	min=j;
       	  }
       }
       if(min!=i)
       	  {
       	  	temp=s1[i];
       	  	s1[i]=s1[min];
       	  	s1[min]=temp;
       	  }
	}
	for(int i=0;i<x;i++)
	{
		cout<<s1[i]<<" ";
	}
	return 0;
}