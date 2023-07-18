#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count=1; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		if(n<=10 || n%10==0)
		{
			cout << 1 << endl << n << endl;
		}
		else
		{
             int temp = 0;
             while(n>0)
             {
             	temp = n%10;
             	count++;
             	if((n-temp)%10==0)
             	{
                    cout << count << endl << temp <<" "<< (n-temp) <<endl;
                    break;
             	}
             	else
             	{
             		n=n/10;
             		//cout << (n-temp) << " ";
             	}
             }
		}
	}
	return 0;
}