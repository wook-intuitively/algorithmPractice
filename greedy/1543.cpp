/*
*
*/
/*
* ã���� res++;
* check�Ͽ� true, falseȮ��
* ��� true �̸� cnt ++;
* ��ġ���� ������  false ��ȯ
*
* text size��ŭ ���ؼ� �ٽ� ã�� ����
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int method_1543(void)
{
	string sLine;
	string sText;

	getline(cin, sLine);
	getline(cin, sText);

	int iCnt = 0;
	if (sLine.size() < sText.size())
	{
		cout << 0 << endl;
		return 0;
	}

	for (int i = 0; i <= sLine.size() - sText.size();)
	{
		bool check = true;
		for (int j = 0; j < sText.size(); j++)
		{
			if (sLine[i + j] != sText[j])
			{
				check = false;
				break;
			}
		}
		if (check)
		{
			iCnt++;
			i += sText.size();
		}
		else
			i++;
	}
	cout << iCnt << endl;
	return 0;
}