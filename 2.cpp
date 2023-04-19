#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,a,b,c,d;
	cin >> x;
	a=x++;
	b=++x;
	c=x--;
	d=--x;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
	a=++x-x--+--x-x++;
	cout<<"\n"<<a<<" ";
	b=--x-x--+(x++)+(++x);
	cout<<"\n"<<b<<" ";
	c=--x+(++x)-(x++)-(--x)-(x--)-(x);
	cout<<"\n"<<c<<endl;
	d=(--x)-(x--)-(++x)-(x++)+(++x)+(--x)+(x++)+(--x);
	cout<<d<<" ";
	int e=++x-(--x);
	cout<<e<<endl;
	return 0;
}