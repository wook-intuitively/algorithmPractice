/*
* �������� �迭
* �־��� ���̺��� ������ ũ�� ������ ���� +1
* ��, ���� ������ ������ ���� ������ ���� ������ �����°�?
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int method_1449(void)
{
	int iNum, iLength;
	int iTape = 0;
	int iTaped = 0;
	int iPosition[1000] = { 0, };

	cin >> iNum >> iLength;
	for (int i = 0; i < iNum; i++)
	{
		cin >> iPosition[i];
	}

	sort(iPosition, iPosition + iNum);
	for (int i = 0; i < iNum; i++)
	{
		int iNextPosition = iPosition[i];

		if (iNextPosition > iTaped)
		{
			iTape++;
			// 0.5 �� 2���̹Ƿ� -1
			iTaped = iNextPosition + (iLength - 1);
		}
	}
	cout << iTape;
	return 0;

}