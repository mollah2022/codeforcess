#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,even=0,odd=0;
	cin >> t;
 while(t--)
 {
 	int x;
 	cin >> x;
 	int value;
 	for(int i=1;i<=x;i++)
 	{
 		cin >> value;
 		if(value%2==0)
 		{
 			even++;
 		}
 		else
 		{
 			odd++;
 		}
 	}
 if(even==odd)
 {
 	cout<<"0"<<endl;
 }
else if(x%2!=0)
{
	cout<<"-1"<<endl;
}
else
{
	cout<<abs(even-odd)/2<<endl;
}
even=0;
odd=0;
 }
return 0;
}