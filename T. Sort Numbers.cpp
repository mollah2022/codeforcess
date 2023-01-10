#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
    cin>>a>>b>>c;

    int mini = a;
    if (mini>b)
        mini = b;

    if (mini>c)
        mini = c;

   int maxi = b;
    if (maxi<a)
       maxi = a;

    if (maxi<c)
       maxi = c;

    cout<< mini <<endl;
    cout<< (a+b+c)-(mini+maxi)<<endl;
    cout<< maxi << endl;

    cout<< "\n"<<a<<"\n"<<b<<"\n"<<c<<endl;
    
    return 0;
}