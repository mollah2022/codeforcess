#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,sum=0;
        cin>>x;
        int s1[x];
        for(int i=0;i<x;i++)
        {
            cin>>s1[i];
            sum+=s1[i];
        }
        if(sum%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
