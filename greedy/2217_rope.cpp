#include <iostream>
#include <algorithm>
/*
 * IDEA : 가장 적은 무게 * 개수 = 최대무게
 *
 */
namespace rope
{
    int iNum,res =0;
    int arrayWieght[100000];

    int main()
    {
        scanf("%d", &iNum);
        for(int i=0; i<iNum; i++)
        {
            scanf("%d", &arrayWieght[i]);
        }
        sort(arrayWieght,arrayWieght+iNum, greater<int>());

        int icalRes = 0;
        for(int i =0; i<iNum; i++)
        {
            arrayWieght[i] = arrayWieght[i] * (i+1);
        }
        sort(arrayWieght,arrayWieght+iNum, greater<int>());


        printf("%d", arrayWieght[0]);

        return 0;
    }
}