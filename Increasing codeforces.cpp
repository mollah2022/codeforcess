#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int x,k=0,i,j;
        cin>>x;
       long long  s1[x];
        for(int i=0; i<x; i++)
        {
            cin>>s1[i];
        }
        sort (s1,s1+x);
        for( i=0,j=1; i<x,j<x; i++,j++)
        {


            if(s1[i]==s1[j])
            {
                k=1;
                break;
            }
            else
            {
                k=0;
            }

        }
        if(k==0)
        {
            cout<<"YES\n";
        }
        else if(k==1)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
