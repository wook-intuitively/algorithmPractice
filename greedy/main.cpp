#include <iostream>

int big = 5;
int small = 3;
int total,totalTemp,result = 0;

int main()
{
    scanf("%d", &total);
    int qutientBig = total/big;

    while(qutientBig >= 0)
    {
        result = qutientBig;
        totalTemp = total - qutientBig*big;
        if(totalTemp%small != 0)
        {
            qutientBig --;
        }
        else
        {
            result += totalTemp/small;
            printf("%d", result);
            return 0;
        }
    }
    printf("%d", -1);
    return 0;
}

