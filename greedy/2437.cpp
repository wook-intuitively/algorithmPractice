/*
* 오름차순 배열
* 1~x 무게 만들 수 있다 가정,
* 다음 저울 추 y가 x무게보다 같거나 작으면
* 저울추로 1+y ~ x+y무게를 모두 만들 수 있음
* 출력은 기존숫자들 합 +1
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
