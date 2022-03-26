用while循环求s=1+2+3+…+n的值
#include <stdio.h>
int main()
{
    int i=1,sum=0,n;
    scanf("%d",&n);
    /********** Begin **********/
    while(n)
    {
        sum+=n;
        n--;
    }
    /********** End **********/
    printf("sum=%d\n",sum);              
    return 0;
}
