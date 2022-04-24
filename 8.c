//练习-求正整数n之内的所有完数及其因子
#include <stdio.h>
void Print(int n)
{
    int i = 0;
    int a = 0;
    int sum = 0;
    int count = 0;
    int arr[100] = { 0 };
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            arr[a] = i;
            a++;
            sum += i;
            count++;
        }
    }
    if (n == sum)
    {
        printf("%d=", sum);
        for (i = 0; i < count - 1; i++)
        {
            printf("%d+", arr[i]);
        }
        printf("%d\n", arr[count - 1]);
    }
}
int main()
{
    /********** Begin **********/
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        Print(i);
    }

    /********** End **********/
    return 0;
}

