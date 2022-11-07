
#include <iostream>
using namespace std;
#include <cmath>
int main()
{

int x,y=0,a,i=1,c;
cout<<"Enter x";
cin>>x;
do
{
c=(x%(i*10));
a=(c)/i;
y=a+y;
i=i*10;
}
while(c!=x);
cout<<y;
return 0;
}