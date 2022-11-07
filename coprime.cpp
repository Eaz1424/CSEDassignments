#include<iostream>
using namespace std;
int main ()
{
    float a,b,c;
    cout<<"Enter a,b";
    cin>>a>>b;
    if(a>b)
    c=a/b;
    if(b>a)
    c=b/a;

    if((int)c==c)
    cout<<"Not coprime";
    else
    cout<<"Coprime";
    return 0;
}