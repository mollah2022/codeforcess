#include<bits/stdc++.h>
using namespace std;

int32_t main()

{
    int t;
    cin >> t;
    while(t--)
    {

       long long n;
        cin >> n;
        vector < long long > a(n);
        for(int i=0;i<n;i++)
        {
           cin >> a[i];
        }

        long long c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {

               c++;
            }

        }
        int b=0;
        if(c==n)
        {
           b=pow(2,c)-1;
        }
        else
        {

            b=pow(2,c);
        }

        cout << b%1000000007 << endl;
    }
  return 0;

}
