#include <stdio.h>

int main()
{
    int i=11,sum;
    while(i<=99)
    {
       
        sum=(i%10)+(i/10);
        if(sum==7)
        {
         printf("%d\n",i);
        }
        i=i+2;
    }
    
}
