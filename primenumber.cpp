	
 #include<iostream>
using namespace std;
int main ()
{
	int a,n=1,c=1;
	cout<<"Enter a number";
	cin>>a;
	if(a==2)
	cout<<"Prime";
	else if(a==0 || a==1)
	{
		cout<<"Not prime";


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
	
	cout<<"Not Prime Number "<<n;
	
	else
	cout<<"Prime Number "<<n;
	
	}
	return 0;
}
 