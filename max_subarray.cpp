#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int x;
		 int count=0;
		cin >> x;

		int s1[x];
		for(int i=0;i<x;i++)
		{
			cin >> s1[i];
		}

		for(int i=0;i<x;i++)
    {
       
        for(int j=i;j<x;j++)
        {
       
            count++;
        }

	}
	cout << count << endl;
    }
	return 0;
}