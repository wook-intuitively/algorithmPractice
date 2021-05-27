#include <iostream>

//CORE
/*  Problem : K를 만들 수 있는 동전의 최소 갯수
 *  input : 동전 종류의 개수 : N, 만들어내야할 값 : K, 동전 종류 array[N-1]
 *
 *  IDEA
 *  1) 모든 돈이 배수임을 확인 << greedy 조건(모든 숫자 만들기 가능)
 *  2) 사용할 수 있는 가장 큰 값을 넣은 뒤, 몫으로 하나씩 줄여나갈 수 있음
 *
 *  CORE
 *  0) result = 몫의 합
 *  1) scanf("%d %d", &N,&K);
 *  2) 동전 종류 for(  ) { CoinArray[i] = scanf("%d",CoinArray[i])}
 *  3) Sort or i 값 대신 N-i 값 사용  << 최대값 부터 배열     <<SORTING
 *  4) 반복문 거치면서 최댓 값 넣기
 *     4-1) 몫으로 나누고 뺸 나머지 값을 다시 하위 것으로 나누고 나머지가 0이 될 때까지 반복
 *
 */
namespace coin0
{
    int N,K =0;
    int ArrayCoin[50];
    int main()
    {
        int cnt =0;

        scanf("%d %d", &N,&K);
        for(int i =0; i<N; i++)
        {
            scanf("%d" , &ArrayCoin[N-1-i]); //오름차순 > 내림차순으로 변경
        }
        //코드의 효율성이 없도록 짜보자
        // 1) 뺄셈만을 이용한 풀이
        for(int j=0; j<N; j++)
        {
            while(K - ArrayCoin[j] >= 0)
            {
                K -= ArrayCoin[j];
                cnt++;
                if(K ==0)
                    break;
            }
        }
        // 2) 나눗셈을 이용한 풀이
//        for(int j=0; j<N; j++)
//        {
//            while(K/ArrayCoin[j] > 0)
//            {
//                cnt += K/ArrayCoin[j];
//                K -= (K/ArrayCoin[j]) * ArrayCoin[j];
//            }
//        }
        printf("%d", cnt);
        return 0;
    }
}