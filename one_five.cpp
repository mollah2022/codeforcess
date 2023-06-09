#include<bits/stdc++.h>
using namespace std;

void ans(int a[],int y)
{
	int h=0;
	int mx = a[0];
	int mn = a[0];

	for(int i=0;i<y;i++)
	{
		if(a[i]>mx)
		{
			mx=a[i];
		}
		if(a[i]<mn)
		{
			mn=a[i];
		}
	}
	cout << "The maximum number : " << mx << endl ;
	cout << "The minimum number : " << mn << endl ;
     int found=0,count=0;
	for(int i=0;i<y;i++)
	{
		int d=a[i];
		for(int j=2;j<d;j++)
	{
		if(d%j==0)
		{
             found=1;
             break;
		}
	}
            if(found==0 && d!=1)
	{
         count++;
	}
	found=0;

	}
	cout << "The number of prime numbers : " << count << endl;
    for(int i=0;i<y;i++)
    {
    	if(a[i]>=0 && a[i]<=9)
    	{
              h++;
    	}
    }

    cout << "The number of palindrome numbers : " << h << endl;

}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	ans(s1,x);
}