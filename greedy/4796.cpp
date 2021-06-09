// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
* int iNum = 1;
* while(a!=0 || b!=0 || c!=0)
* {
*	int a,b,c;
*	scanf("%d %d %d", int int int)
*
*	V/p = Q
*	res = L * Q + V % P
*
*	printf("Case " + "%d" + ":  " + "%d", iNum, res );
*	iNum += 1 ;
* }
* //예외상황 발생, 나머지 값이 P값보다 큰 경우 (즉 연속할 수 없는 경우 고려해야함)
* if V%P > L ? L : V%p;


*/
#include <iostream>

using namespace std;

int method_4796(void)
{
	int iNum = 1;
	int iL = 1, iP = 1, iV = 1;
	int iQuotient = 0;
	//배열 초기화 어떻게 해야돼? << 잘 모를 때엔, 벡터를 쓰면 되겠구나
	int res[100000];


	while (1)
	{
		scanf_s("%d %d %d", &iL, &iP, &iV);

		if (iL != 0 || iP != 0 || iV != 0)
		{
			iQuotient = iV / iP;
			//왜 계산식으로 넣어서  ? 연산을 하면 안되지?
			int test = iV % iP;
			int iCondition = (test > iL) ? iL : test;
			res[iNum] = (iL * iQuotient) + iCondition;

			iNum += 1;
		}
		else
			break;
	}
	for (int i = 1; i < iNum; i++)
	{
		printf("Case %d: %d\n", i, res[i]);
	}
	return 0;
}