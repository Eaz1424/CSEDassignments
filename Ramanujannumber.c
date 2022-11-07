#include <stdio.h>
#include <math.h>
#include<stdbool.h>
bool isram(int a)
{
    int e=0;
    float c;
    int temp=0;
   
    
    for(int i=1;(i*i*i)<a;i++)
    {
        
        c=(a)-(i*i*i);
        float d=cbrt(c);
        
        if((int)d==d)
        {
        
        ++e;
        }
       
        
        
        
    

        }
        
        if(e==1 || e==2)
        {

        return true;
        
        }
        else{
            return false;
        }
       
        
        }
        
    
     

   
int main()
{
    int i=0,n,d;
    printf("Enter n");
    scanf("%d",&n);
    
    while(i<=n)
    {
        i++;
        
       if(isram(i)==true)
       {
        printf("%d \n",i);
       }


    }
    return 0;

}