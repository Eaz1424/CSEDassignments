#include<stdio.h>
int numberofdigits(int a)
{
    int count=0;
    for(int i=10;a>0;i*=10){
        a=a/i;
        ++count;
    }
return count;
}
int digits(int a)
{
    int temp=a;
    a=a*a;
   int test=a-temp;
    int b=0;
int c=numberofdigits(temp);
while(test>0)
{
int r=test%10;
test=test/10;
if(r==0)
b++;
}
if (b==c)
printf("Automorphic");
else
printf("Not Automorphic");
}

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    
   digits(a);
   return 0;
   

}