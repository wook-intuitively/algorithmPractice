/*
* �迭�� ����������
* ��- 1 < �� �� �����ϸ� ���� ������ �̵�
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int method_2847()
{
	int iLevel[105] = { 0, };
	int iNum;
	int iCnt = 0;

	cin >> iNum;

	for (int i = 0; i < iNum; i++)
	{
		cin >> iLevel[i];
	}

	for (int j = iNum - 1; j > 0; --j)
	{
		while (iLevel[j] <= iLevel[j - 1])
		{
			iLevel[j - 1]--;
			iCnt++;
		}
	}
	cout << iCnt << endl;
	return 0;
}