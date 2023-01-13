#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if((x%4==0 && y%7==0)||(x%7==0 && x%4==0))
{
	cout<<4<<" "<<7<<endl;
}

else
{
	cout<<"-1\n";
}
return 0;
}