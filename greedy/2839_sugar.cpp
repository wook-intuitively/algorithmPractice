#include <iostream>
/*  Problem : 설탕봉지 (5kg, 3kg)
 *  input : 설탕의 양[kg]
 *  output : 설탕봉지 필요 최소 갯수 or 만들 수 없는 경우 -1 반환
 *
 *  IDEA
 *  1) 모든 시간이 배수임가 아님 << 동적프로그래밍 vs greedy 선택해야 함
 *  2) 사용할 수 있는 가장 큰 값을 넣은 뒤, 몫으로 하나씩 줄여나갈 수 있음 << 만들 수 없는 경우거나, 3으로는 만들 수 있는 경우가 있음
 *  3)
 *
 *  CORE
 *  0) result = 필요한 총 설탕봉지 개수
 *  1) 몫을 하나씩 줄여나가면서 전수 조사 필요. 반복(몫--;)
 *     ex)  (5, 3, 1) (5, 2, 3) (5, 1, 5)
 *          (4, 6, 1) (4, 5, 3) ...
 *  2) 5를 최대로 사용하는 경우, 3으로도 나누어 떨어지지 않으면 -1 반환
 *  3) 5의 몫을 하나 줄여서 다시 반복
 *  4) 전체 반복 후에도 떨어지지 않으면 -1 반환
 *  *****중요 포인트
 *  5) 2,4 합쳐서 : 5를 최대로 사용하는 경우, 3을 최대로 사용하는 경우 조사, 그 이후 다시 몫줄이고 조사 몫 줄이고 조사
 *
 */

//메서드를 정의하지 않고 사용하는 경우부터 작성하자
#define BIG 5;
#define SMALL 3;
namespace sugar
{
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

}