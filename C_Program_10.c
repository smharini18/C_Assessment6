#include <stdio.h>
int main()
{
    int i=71,sum=0;
    while(i<=79)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("%d",sum);
    return 0;
}
