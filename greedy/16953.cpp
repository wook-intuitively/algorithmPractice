/*
* 2로 나누어서 안떨어질때까지 진행하고
* 1을 삭제해서 몇번 연산하는지 알아보자 !
*
* 1) 다 나눴는데 초기값보다 큰 경우 >> -1 반환
* 2) 초기값과 값이 같아지는 경우 >> 결과값 출력
* 3) 1이 붙는 경우는, 10으로 나눴을 때 나머지가 1인 경우로 대체, 이 때, 나눠준다
* 4) 2로 나눠 떨어지는 경우는 2로 나누고 다시 ival
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