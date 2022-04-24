//练习-输入一批整数，以0为结束标志，找出最大数和最小数所在的位置，并把二者对调
int getmax(int* p, int n)
{
	int i, max = 0;
	for (i = 0; i < n - 1; i++)
	{
		if (p[i] >= p[i + 1] && p[i] >= max)
		{
			max = p[i];
		}
		else if (p[i + 1] >= p[i] && p[i + 1] >= max)
		{
			max = p[i + 1];
		}
		else
		{
			max = max;
		}
	}
	return max;
}
int getmin(int* p,int n)
{
	int i, min = 2147483647;
	for (i = 0; i < n - 1; i++)
	{
		if (p[i] <= p[i + 1] && p[i] <= min)
		{
			min = p[i];
		}
		else if (p[i + 1] <= p[i] && p[i + 1] <= min)
		{
			min = p[i + 1];
		}
		else
		{
			min = min;
		}
	}
	return min;
}
void print(int* p,int n,int a,int b)
{
	int i = 0;
	i = p[a];
	p[a] = p[b];
	p[b] = i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", p[i]);
	}
}


#include<stdio.h>
#define N 100

int main()
{
	/********** Begin **********/
	int arr[N] = { 0 };
	int i, count = 0;
	int x1 = 0;
	int x2 = 0;
	for (i = 0; ; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
		{
			break;
		}
		count++;
	}
	int max = getmax(arr,count);
	for (i = 0; i < count; i++)
	{
		if (max == arr[i])
		{
			x1 = i;
		}
	}
	printf("最大值：%d，下标：%d\n", max, x1);
	int min = getmin(arr,count);
	for (i = 0; i < count; i++)
	{
		if (min == arr[i])
		{
			x2 = i;
		}
	}
	printf("最小值：%d，下标：%d\n", min, x2);
	print(arr,count,x1,x2);
	/********** End **********/
	return 0;
}