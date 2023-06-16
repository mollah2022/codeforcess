#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long int x,found=0,i;
	cin >> x;
   
   if(x<=1)
   {
   	  cout << "NO\n";
   	  return 0;
   }

   for( i=2;i<=sqrt(x);i++)
   {
   	  if(x%i==0)
   	  {
   	  	  found=1;
   	  	  break;
   	  }
   }
   if(found == 1)
   {
   	cout << "NO\n";
   }
   else
   {
   	cout << "YES\n";
   }

   return 0;
}