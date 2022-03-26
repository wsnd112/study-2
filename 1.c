//输入一个不多余5位的正整数，要求①求出它是几位数②分别输出每一位数字③按逆序输出各位数字
#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	scanf("%d", &num);
	//place = log10((double)num) + 1;//
	/********** Begin **********/
	int tmp = num;
	int count = 0;
	int pow = 1;
	while (num != 0)
	{
		num /= 10;
		count++;
		pow *= 10;
	}
	printf("%d为%d位数\n", tmp, count);
	int i = 0;
	printf("顺序输出为：");
	for (i = 0; i < count - 1; i++)
	{
		int x = tmp;
		x = x / (pow / 10);
		printf("%d,", x % 10);
		pow /= 10;
	}
	int y = tmp;
	printf("%d\n", y % 10);
	int j = 0;
	printf("逆序输出为：");
	for (j = 0; j < count - 1; j++)
	{
		printf("%d,", tmp % 10);
		tmp /= 10;
	}
	printf("%d", tmp % 10);

	/********** End **********/
	return 0;
}
