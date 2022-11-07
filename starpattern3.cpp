#include <iostream>

using namespace std;



int main()
{
     int n,i,j,k;
    cout<<"Enter n";
    cin>>n;
    for(j=1;j<=n;)
    {
        for(k=1;k<=j;)
        {
            
            if(k==1)
            {
            for(i=n;i>k;i--)
            {
                cout<<" ";
            }
            }
            
            
            cout<<"* ";
            ++k;
        }
       cout<<endl;
       j+=1;
       

    }
    return 0;
}
