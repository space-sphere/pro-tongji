#define _CRT_SECURE_NO_WARNING
#include <stdbool.h>
#include <stdio.h>

int main()
{

    printf("请输入年，月，日\n");
    int y, m, d, date_num;
    bool day = false, run = false;
    scanf("%d %d %d", &y, &m, &d);

    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        run = true;

    if (m < 13 && m > 0)
    {
        if (d > 31)
            printf("输入错误-日与月的关系非法\n");
        else if (d > 30)
        {
            if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)
                printf("输入错误-日与月的关系非法\n");
            else
            {
                day = true;
            }
        }
        else if (d > 29)
        {
            if (m != 2)
                day = true;
            else
                printf("输入错误-日与月的关系非法\n");
        }
        else if (d == 29)
        {
            if (m == 2 && !run)
                printf("输入错误-日与月的关系非法\n");
            else
                day = true;
        }
        else
            day = true;
    }
    else
    {
        printf("输入错误-月份不正确\n"); // 注意这里是半角还是全角
    }

    if (day == true)
    {
        switch (m)
        {
        case 1:
            date_num = d;
            break;
        case 2:
            date_num = 31 + d;
            break;
        case 3:
            date_num = 31 + 28 + run + d;
            break;
        case 4:
            date_num = 31 + 28 + run + 31 + d;
            break;
        case 5:
            date_num = 31 + 28 + run + 31 + 30 + d;
            break;
        case 6:
            date_num = 31 + 28 + run + 31 + 30 + 31 + d;
            break;
        case 7:
            date_num = 31 + 28 + run + 31 + 30 + 31 + 30 + d;
            break;
        case 8:
            date_num = 31 + 28 + run + 31 + 30 + 31 + 30 + 31 + d;
            break;
        case 9:
            date_num = 31 + 28 + run + 31 + 30 + 31 + 30 + 31 + 31 + d;
            break;
        case 10:
            date_num = 31 + 28 + run + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
            break;
        case 11:
            date_num = 31 + 28 + run + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 30 + d;
            break;
        default:
            date_num = 31 + 28 + run + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 30 + 31 + d;
            break;
        }
        printf("%d-%d-%d是%d年的第%d天\n", y, m, d, y, date_num);
    }
    return 0;
}
