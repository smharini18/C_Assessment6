#include<stdio.h>
int main()
{
    int a,i,prime;
    printf("Enter the Number : ");
    scanf("%d",&a);
    if(a<2)
    {
    printf("Not prime");
    return 0;
    }
    prime=1;
    i=2;
    while(i<a)
    {
    if(a%i==0)
    {
    prime=0;
    }
    i++;
    }
    
    if(prime==1)
    {
    printf("Prime");
    }
    else
    {
    printf("Not prime");
    }
    
}
