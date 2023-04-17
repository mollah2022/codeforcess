#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y,k,l;
	cin >> x >> y;
	int x1,x2,x3,x4,x5,x6,x7,x8;
	cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8;
	for(int i=0;i<y;i++)
	{
		k=min({x1,x2,x3,x4,x5,x6,x7,x8});
		if(k==l)
		{
			break;
		}
		cout<<k<<" ";
		if(x1==k||x2==k||x3==k||x4==k||x5==k||x6==k||x7==k||x8==k)
		{
			l=k;
           
		}
	}
	return 0;
}