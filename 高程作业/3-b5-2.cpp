#include <iostream>
using namespace std;

int main()
{
    cout << "请输入年，月，日" << endl;
    int y, m, d, date_num;
    bool day = false, run = false;
    cin >> y >> m >> d;

    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        run = true;

    if (m < 13 && m > 0)
    {
        if (d > 31)
            cout << "输入错误-日与月的关系非法" << endl;
        else if (d > 30)
        {
            if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11)
                cout << "输入错误-日与月的关系非法" << endl;
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
                cout << "输入错误-日与月的关系非法" << endl;
        }
        else if (d == 29)
        {
            if (m == 2 && !run)
                cout << "输入错误-日与月的关系非法" << endl;
            else
                day = true;
        }
        else
            day = true;
    }
    else
    {
        cout << "输入错误-月份不正确" << endl; // 注意这里是半角还是全角
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

        cout << y << '-' << m << '-' << d << "是" << y << "年的第" << date_num << "天" << endl;
    }
    return 0;
}
