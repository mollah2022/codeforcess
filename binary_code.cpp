#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int s1[x];
        for(int i=0;i<x;i++)
        {
            cin >> s1[i];
        }

        sort(s1,s1+x);
        int l = x-1;
        int f=0,sum=0;
        int mid = f+l/2;
        while(mid>0)
        {
               sum+=s1[l]-s1[f];
        }
        cout << sum << endl;
    }

    return 0;
}