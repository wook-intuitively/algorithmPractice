// ConsoleApplication1.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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
* //���ܻ�Ȳ �߻�, ������ ���� P������ ū ��� (�� ������ �� ���� ��� ����ؾ���)
* if V%P > L ? L : V%p;


*/
#include <iostream>

using namespace std;

int method_4796(void)
{
	int iNum = 1;
	int iL = 1, iP = 1, iV = 1;
	int iQuotient = 0;
	//�迭 �ʱ�ȭ ��� �ؾߵ�? << �� �� ����, ���͸� ���� �ǰڱ���
	int res[100000];


	while (1)
	{
		scanf_s("%d %d %d", &iL, &iP, &iV);

		if (iL != 0 || iP != 0 || iV != 0)
		{
			iQuotient = iV / iP;
			//�� �������� �־  ? ������ �ϸ� �ȵ���?
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