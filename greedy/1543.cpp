/*
*
*/
/*
* 찾으면 res++;
* check하여 true, false확인
* 모두 true 이면 cnt ++;
* 일치하지 않으면  false 반환
*
* text size만큼 더해서 다시 찾기 시작
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