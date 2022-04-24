//练习-将一个数组中的值按逆序重新存放
#include<stdio.h>
#define N 100
int main()
{
	/********** Begin **********/
	int arr[N]={0};
	int i,count=0;
	for(i=0;;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==0)
		{
			break;
		}
		count++;
	}
	for(i=0;i<count-1;i++)
	{
		printf("%d ",arr[count-1-i]);
	}
	/********** End **********/
   return 0;	
}