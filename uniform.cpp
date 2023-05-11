#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t,n,k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        char a[] = {"abcdefghijklmnopqrstuvwxyz"};
        int j = 0;
        for(int i=0; i<n; i++)
        {
            cout<<a[j++];

            if(j == k)
            {
                j = 0;
            }
        }

        cout<<endl;
    }

    return 0;
}