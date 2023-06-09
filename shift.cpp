#include<bits/stdc++.h>
using namespace std;

void ans(int a[],int y)
{
	int count=0;
     for(int i=0;i<y;i++)
     {
     	if(a[i]!=0)
     	{
     		cout << a[i] << " ";
     	}
     	else
     	{
                 count++;
     	}
     }

     while(count--)
     {
     	cout << "0" <<" ";
     }

     cout << endl;
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