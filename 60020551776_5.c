#include <stdio.h>
int main()
{
    int n,a=0,i=2,m,b=0;
    scanf("%d" ,&n);
    m=n;
    while(m!=1)
    {
        if(m%i==0)
        {
            m/=i;
            if(a==i)
                break;
            a=i;
            b++;
        }
        else
            i++;
    }
    if(b==3)
        printf("%d is a Lucky Number" ,n);
    else
        printf("%d is not a Lucky Number" ,n);
    return 0;
}
