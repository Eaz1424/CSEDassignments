#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;

cout<<"Enter 2 numbers";
cin>>a>>b;
if(a>b)
{
    for(int i=a;i>1;i--)
    {
        c=a%i;
        d=b%i;
        if(c==0 && d==0)
        {
            cout<<"HCF is "<<i;
            break;
        }

    }
}
else
{
    for(int i=b;i>1;i--)
    {
        c=a%i;
        d=b%i;
        if(c==0 && d==0)
        {
            cout<<"HCF is "<<i;
            break;
            
        }

    }

    }


return 0;
}