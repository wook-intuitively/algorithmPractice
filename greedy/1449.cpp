/*
* 오름차순 배열
* 주어진 길이보다 간격이 크면 테이프 개수 +1
* 즉, 다음 구멍이 이전에 붙인 테이프 범위 안으로 들어오는가?
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
			// 0.5 씩 2개이므로 -1
			iTaped = iNextPosition + (iLength - 1);
		}
	}
	cout << iTape;
	return 0;

}