/*
* �������� �迭
* 1~x ���� ���� �� �ִ� ����,
* ���� ���� �� y�� x���Ժ��� ���ų� ������
* �����߷� 1+y ~ x+y���Ը� ��� ���� �� ����
* ����� �������ڵ� �� +1
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int method_2437()
{
	int iNum;
	cin >> iNum;

	int ArrayVal[1000] = { 0, };
	for (int i = 0; i < iNum; i++)
	{
		cin >> ArrayVal[i];
	}

	sort(ArrayVal, ArrayVal + iNum);

	int res = 1;
	for (int i = 0; i < iNum; i++)
	{
		if (ArrayVal[i] > res)
		{
			break;
		}
		res += ArrayVal[i];
	}
	cout << res;
	return 0;

}
