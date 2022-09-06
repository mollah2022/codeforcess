#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x>0)
    {
        x++;
        int s=x/1000;
        int r=(x%1000)/100;
        int p=((x%1000)%100)/10;
        int q=(((x%1000)%100)%10);
        if(s!=r&&s!=p&&s!=q&&r!=p&&r!=q&&p!=q)
        {
            break;
        }

    }
    cout<<x<<endl;
    return 0;
}

