#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,s=0;
        cin>>x>>y;
        if(x%y==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            s=y-(x%y);
            cout<<s<<endl;
        }
    }
    return 0;
}
