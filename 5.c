//学习-读入全班30个学生的C语言成绩，求全班平均成绩，并统计高于平均分的学生人数
#include <stdio.h>
#define N 5
int main()
{   
	float score[N],aver,sum=0;
    int  i;
    int  count=0;     
    /********** Begin **********/
    for(i=0;i<5;i++)
    {
        scanf("%f",score+i);
    }
    for(i=0;i<5;i++)
    {
        sum+=score[i];
    }
    aver=sum/5;
    for(i=0;i<5;i++)
    {
        if(score[i]>aver)
        {
            count++;
        }
    }
    printf("aver=%f\n",aver);
    printf("count=%d",count);
    /********** End **********/
	return 0;
} 
