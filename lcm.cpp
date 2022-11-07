#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d,i;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
    if(a>b)
    {
    for(i=1;i<=a;i++)
    {
        c=b*i;
        if(c%a==0)
        {
        cout<<"LCM is "<<c;
        break;
    }
    } 
    }
    else{
        for(i=1;i<=b;i++)
    {
        c=a*i;
        if(c%a==0)
        {
        cout<<"LCM is "<<c;
        break;
    }
    } 
    }
}