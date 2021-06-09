/*
distance[i] 개수와 cost[i]의 개수가 다른 경우
  초기값 c0 * d1
  비교 기준 = iCostRef

  c[0] = iCostRef;
  for()
    if iCostRef < c[i+1] 
        res += c[i] * d[i+1]
        iCostRef = c[i]
    else 
        res += c[i+1] * d[i+1]
        iCostRef = c[i+1]
  */

#include <iostream>


using namespace std;

namespace testere{

int main()
{
    int iCityNum;
    long long iCostRef;
    long long res = 0;
    int iDist[100000] = { 0, };
    int iCost[100000] = { 0, };
    scanf_s("%d", &iCityNum);
    for (int i = 1; i < iCityNum; i++)
    {
        scanf_s("%d", &iDist[i]);
    }
    for (int j = 0; j < iCityNum; j++)
    {
        scanf_s("%d", &iCost[j]);
    }
    iCostRef = iCost[0];
    res = iCost[0] * iDist[1];

    //greedy
    for (int i = 1; i < iCityNum; i++)
    {
        if (iCostRef <= iCost[i])
        {
            res += iCostRef * iDist[i + 1];
        }
        else
        {
            iCostRef = iCost[i];
            res += iCostRef * iDist[i + 1];

        }
    }
    printf("%lld", res);
    return 0;
}
}