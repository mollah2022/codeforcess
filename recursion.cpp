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
        int mx,mn,ans=0,i=0,j=x-1;
        while(i<=j)
        {
            mx = s1[j];
            mn = s1[i];
            ans +=(mx-mn);
        }
        cout << ans << endl;
    }

    return 0;
}