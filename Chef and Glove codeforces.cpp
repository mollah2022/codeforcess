#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int x,a=0,b=0,c=0,d=0;
        cin>>x;
        int s1[x];
        int s2[x];
        for(i=0;i<x;i++)
        {
             cin>>s1[i];
        }
        for(j=0;j<x;j++)
        {
                cin>>s2[j];
        }
        for(i=0,j=0;i<x,j<x;i++,j++)
        {
                if(s1[i]<s2[j])
                {
                    a++;
                }
                else if(s1[i]>s2[j])
                {
                    b++;
                }
                else if(s1[i]==s2[j])
                {
                    c++;
                }
                else if(s1[i]!=s2[j])
                {
                    d++;
                }
        }
        if(a>=1)
        {
            cout<<"front\n";
        }
        else if(b>=1)
        {
            cout<<"back\n";
        }
        else if(c>=1)
        {
            cout<<"both\n";
        }
        else if(d>=1)
        {
            cout<<"none\n";
        }
    }
    return 0;
}
