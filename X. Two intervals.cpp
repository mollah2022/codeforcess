#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if((x2>y1 && y2>y1)||(x2<x1 && y2<x1))
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<max(x1,x2)<<" "<<min(y1,y2)<<endl;
	}
	return 0;
}