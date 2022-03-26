用switch语句实现输入某年某月某日，判断这一天是这一年的第几天
#include<stdio.h>
int main()
{
    int day, month, year, num = 0, leap;
    scanf("%d%d%d", &year, &month, &day);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        switch (month)
        {
            case 12: num += 30;
            case 11: num += 31;
            case 10: num += 30;
            case 9: num += 31;
            case 8: num += 31;
            case 7: num += 30;
            case 6: num += 31;
            case 5: num += 30;
            case 4: num += 31;
            case 3: num += 29;
            case 2: num += 31;
            default:break;
        }
    }
    else
    {
        switch (month)
        {
        case 12: num += 30;
        case 11: num += 31;
        case 10: num += 30;
        case 9: num += 31;
        case 8: num += 31;
        case 7: num += 30;
        case 6: num += 31;
        case 5: num += 30;
        case 4: num += 31;
        case 3: num += 28;
        case 2: num += 31;
        default:break;
        }
    }
    num = num + day;
    printf("这一天是这一年的第%d天", num);
    return 0;
}