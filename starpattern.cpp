#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    cout<<"*"<<endl;
    
    int i,j=0;
    for(i=0;i<n-1;i++)
    {
        
        cout<<"*";
        if(i!=j)
        cout<<endl;
        for(j=0;j<=i;j++) 
        {
            
            cout<<"*";
            
            
            
            if(i==j)
            cout<<endl;
        }
    }

    return 0;
}