#include <stdio.h>
void main()
{
    int n,m,i;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {
        m=n*i;
        printf("%d * %d = %d \n", n, i, m);
    }
}
