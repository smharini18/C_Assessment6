#include <stdio.h>

int main()
{
    int i=10,sum;
    while(i<=99)
    {
       
        sum=(i%10)+(i/10);
        if(sum==6)
        {
         printf("%d\n",i);
        }
        i=i+2;
    }
    
}
