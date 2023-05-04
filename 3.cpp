#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int x,count=0,sum=0;
   cin >> x;
   int s1[x];

   for(int i=0;i<x;i++)
   {
   	cin >> s1[i];
   }

   sort(s1,s1+x);
   for(int i=0;i<x;i++)
   {
   	  if(s1[i]!=s1[i+1])
        {
         count++;
        }
        else
        { 
         sum++;

        }
   }
   cout << abs(count-sum) << endl;
   return 0;
}