#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;
   int temp=0;
   int count=0;
   int y=x;
	while(y>0)
	{
          temp = y%10;
          count++;
          y = y/10;
	}
	if(x==0)
	{
		cout << "0000" << endl;
	}
    else if(count==4)
	{
		cout << x << endl;
	}
	else if(count!=4)
	{
		int p = (4-count);
		for(int i=0;i<p;i++)
		{
			cout << 0;
		}
		cout << x << endl;
	}
  return 0;
}