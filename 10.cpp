#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x,y,count=0;
	cin >> x >> y;
	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
		if(s1[i]==y)
		{
            count++;
		}
	}
	cout<<count+y<<endl;
		count=0;
	return 0;
}