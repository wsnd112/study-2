用switch语句编写一个简单的实数四则运算程序
#include<stdio.h>
int main()
{
	double a, b;
	char c;
	scanf("%lf%c%lf", &a, &c, &b);
	/********** Begin **********/

	switch (c)
	{
	case 43:
		printf("%.2lf%c%.2lf=%.2lf",a,c,b, a + b);
		break;
	case 45:
		printf("%.2lf%c%.2lf=%.2lf",a,c,b, a - b);
		break;
	case 42:
		printf("%.2lf%c%.2lf=%.2lf",a,c,b, a * b);
		break;
	case 47:
		if (b == 0)
		{
			printf("error");
		}
		else
		{
			printf("%.2lf%c%.2lf=%.2lf", a, c, b, a / b);
		}
		break;
	default:
		break;
	}
	/********** End **********/
	return 0;
}