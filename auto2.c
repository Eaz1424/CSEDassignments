#include <stdio.h>
#include <stdbool.h>
int digits(int n)
{
    int r,i=0;
    while(n>0){
    r=n%10;
    n=n/10;
    ++i;
}
return i;
}
bool isauto(int N)
{
   int temp=N;

    int N2;
    int count=0;
    
    
     
     N2=N*N;
    while(N>0)
    {
        if(N%10!=(N2)%10)
        {
            return false;
            break;

        }
        int A=N%10;
        int B=N2%10;
        if(A==B)
        {
            ++count;
            N=N/10;
            (N2)=(N2)/10;
        }
         if(count==digits(temp)){
        return true;
        break;
         }
        
       
    }
   
    return 0;

}

int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(isauto(i)==true)
        {
            printf("%d ",i);
        }
    }
    return 0;

}