#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	double r1;
	r1=(double)x/y;
	cout<<"floor " <<x<<" / " <<y<<" = "<<floor(r1)<<endl;
	cout<<"ceil " <<x<<" / " <<y<<" = "<<ceil(r1)<<endl; 
	cout<<"round " <<x<<" / " <<y<<" = "<<round(r1)<<endl;     
	return 0;
}