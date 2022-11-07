#include <iostream>

using namespace std;



int main()
{
     int n,i,j,k;
    cout<<"Enter n";
    cin>>n;
    for(k=1;k<=n;)
    {
        for(j=1;j<=k;)
        {
            
            if(j==1)
            {
            for(i=n;i>k;i--)
            {
                cout<<" ";
            }
            }
            
            
            cout<<"* ";
            ++j;
        }
       cout<<endl;
       k+=2;
       

    }
    return 0;
}
