#include<iostream>
using namespace std;
bool primenumber (int a)
{
	int n=1,c=1;
	
	if(a==2)
	return true;
	else if(a==0 || a==1)
	{
		return false;


	}
	else 
	
	{
	
	
	while(c!=0) 
	{
	
	c=a%++n;// /2
	 // n=3
	if(n==a-1)
	{
	break;	
	}
	}
	if(c==0)
	
	return false;
	
	else
	return true;
	
	}
}
 
int sumofdigits(int x)
{
int y=0,a,i=1,c;
do
{
c=(x%(i*10));
a=(c)/i;
y=a+y;
i=i*10;
}
while(c!=x);

return y;
}


int main ()
{
	int a,n=1,c=1,d,e,f=0;
	cout<<"Enter a number";
	cin>>a;
	for(n=2;n<a;n++)
	{
	
	c=a%n;
	e=primenumber(n);
	if(c==0 && e==true)
	{
    d=sumofdigits(n);          
	f=f+d;
	}
	
	}
	int g=sumofdigits(a);
	if(f==g)

	cout<<"Smith"<<endl;
	else
	cout<<"Not smith";
	return 0;
}


