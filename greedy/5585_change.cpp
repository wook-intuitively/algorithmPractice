#include <iostream>
//CORE
/*  Problem : 1000 냈을 때, 거스름돈의 동전 최소 개수 (종류 : 500, 100, 50, 10, 5, 1)
 *  input : 내야할 돈 p
 *
 *  IDEA
 *  1) 모든 돈이 배수임을 확인 << greedy 조건(모든 숫자 만들기 가능)
 *  2) 사용할 수 있는 가장 큰 값을 넣은 뒤, 몫으로 하나씩 줄여나갈 수 있음
 *
 *  CORE
 *  0) result = 몫의 합
 *  1) 동전 종류 ArrayCoin[i] 저장
 *  2) 반복문 거치면서 최댓 값 넣기
 *     2-1) 몫으로 나누고 뺸 나머지 값을 다시 하위 것으로 나누고 나머지가 0이 될 때까지 반복
 *
 */
namespace change
{
    int price, result, change = 0;
    int pay = 1000;
    int ArrayCoin[6] = {500,100,50,10,5,1};

    int main()
    {
        scanf("%d" , &price);
        change = pay - price;
        //printf("%d", change); 입력받을 떄, 주소값 넣는 것이랑 값이 나오는 것이랑 확인 필요

        for(int i =0; i<6; i++)
        {
            while(change - ArrayCoin[i] >= 0)
            {
                change -= ArrayCoin[i];
                result ++;
            }
        }
        printf("%d", result);

        return 0;
    }
}
