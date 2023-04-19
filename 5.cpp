#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,i;
	cin >> x;

	cout<<"Right Shift\n";
	for(int i=0;i<4;i++)
	{
		cout<<(x>>i)<<" ";
	}
	cout<<endl;
	cout<<"Left Shift\n";
	for(int i=0;i<4;i++)
	{
		cout<<(x<<i)<<" ";
	}
	return 0;
}