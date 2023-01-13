#include<iostream>
using namespace std;
int main()
{
    int num, rev=0, rem, temp;
    cin>>num;
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    cout<<rev<<endl;
    if(rev==num)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}