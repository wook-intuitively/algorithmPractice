/*
* 2�� ����� �ȶ����������� �����ϰ�
* 1�� �����ؼ� ��� �����ϴ��� �˾ƺ��� !
*
* 1) �� �����µ� �ʱⰪ���� ū ��� >> -1 ��ȯ
* 2) �ʱⰪ�� ���� �������� ��� >> ����� ���
* 3) 1�� �ٴ� ����, 10���� ������ �� �������� 1�� ���� ��ü, �� ��, �����ش�
* 4) 2�� ���� �������� ���� 2�� ������ �ٽ� ival
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int method_16953()
{
	int iNum;
	int iVal;
	cin >> iNum >> iVal;

	int iCnt = 1;

	while (1)
	{
		if (iNum > iVal)
		{
			cout << -1 << endl;
			break;
		}
		if (iNum == iVal)
		{
			cout << iCnt << endl;
			break;
		}

		if (iVal % 10 == 1)
		{
			iVal = iVal / 10;
		}
		else if (iVal % 2 == 0)
		{
			iVal = iVal / 2;
		}
		else
		{
			cout << -1 << endl;
			break;
		}
		iCnt++;
	}
	return 0;

}