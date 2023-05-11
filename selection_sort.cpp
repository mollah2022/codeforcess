#include<bits/stdc++.h>
using namespace std;

int32_t  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x,temp=0,i,j;
    cin >> x;
    int s1[x];

    for(int i=0;i<x;i++)
    {
    	cin >> s1[i];
    }

    for( i=1;i<x;i++)
    {
    	temp=s1[i];
         j=i-1;

         while(j>=0 && s1[j]>temp)
         {
         	s1[j+1]=s1[j];
         	j--;
         }
          s1[j+1]=temp;
    }
    for(int i=0;i<x;i++)
    {
    	cout<<s1[i]<<" ";
    }
    return 0;
}