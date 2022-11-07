	
 #include<iostream>
using namespace std;
int main ()
{
	unsigned long a,fact=1;

	cout<<"Enter a number"<<endl;
	cin>>a;
	if(a==0)
    cout<<"Factorial is 1";
    else
    {

    while(a>0) 
	{
	
	fact=fact*(a--);
	cout<<a<<endl;

	if(a==0)
	break;	
	}
	cout<<endl<<fact;
	
}
 
	return 0;
}