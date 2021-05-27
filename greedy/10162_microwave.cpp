#include <iostream>
/*  Problem : 전자레인지 버튼 3개 (5m, 1m, 10s)
 *            요리할 때 걸리는 시간 : Ts (버튼누름 회수 최소값 구하기)
 *            제한 : T = 234와 같이 딱 떨이지지 않는 경우 발생 (-1 출력)
 *  input : 요리할 때 걸리는 시간 : T
 *
 *  IDEA
 *  1) 모든 시간이 배수임을 확인 << greedy 조건(모든 숫자 만들기 가능)
 *  2) 사용할 수 있는 가장 큰 값을 넣은 뒤, 몫으로 하나씩 줄여나갈 수 있음
 *  3) 딱 떨지지 않는 경우 : 각 버튼들은 서로의 배수이기 때문에, 가장 작은 값인 '0'초에서만 불균형이 일어날 듯.
 *                      그럼 마지막 값에 +1(10sec 짜리 버튼) 추가해주면 됨
 *
 *  CORE
 *  0) result = ( 0 0 0 )  a,b,c버튼의 누름 횟수 출력
 *  1) 버튼 종류 button[i] = {300, 60, 10} 저장
 *  2) 반복문 거치면서 최댓 값 넣기
 *     2-1) 몫으로 나누고 뺸 나머지 값을 다시 하위 것으로 나누고 나머지가 0이 될 때까지 반복
 *     2-2) 1의자리 수 때문에 뺄셈보다는 나눗셈이 더욱 유용할 듯 싶음
 *
 */
namespace microwave
{
    int cookTime, result = 0;
    int arrayButton[3] = {300,60,10};
    int arrayResult[3] = {0, 0, 0};
    int main()
    {
        scanf("%d", &cookTime);

        //딱 안떨이지는 경우 -1 출력 후 종료
        if(cookTime%arrayButton[2] != 0)
        {
            result = -1;
            printf("%d", result);
            return 0;
        }

        //
        for(int i=0;i<3;i++)
        {
            while(cookTime/arrayButton[i] >0)
            {
                arrayResult[i] = cookTime/arrayButton[i];
                cookTime -= arrayButton[i] * (cookTime/arrayButton[i]);
            }
        }
        for(int i = 0; i<3; i++) {
            printf("%d ", arrayResult[i]);
        }
        return 0;
    }
}
