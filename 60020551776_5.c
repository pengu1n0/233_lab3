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
    
}
