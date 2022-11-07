#include<iostream>
using namespace std;
int main()
{
    int x,y,i,sum=0,c=0,l=0;
    cin>>x>>y;
   l=(240-y);
        for(i=1; i<=x; i++)
        {
            sum+=(i*5);
            if(sum>l)
            {
            break;
            }
            c++;
        }
        cout<<c<<endl;
    return 0;
}
