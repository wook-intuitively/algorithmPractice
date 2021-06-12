/*
*	담는 공간 = vector 사용 예정
*
*	negative랑 positive, 0이 있는 경우로 나눔 + 1있는 경우에는, 각각 더해주는게 맞다.
*	(0이 있는지 1이 있는지 알아야 함)
*	같은 수가 여러번 나올 수 있음.
*
* Negative의 경우
*   if(-가 홀수 개)
*		if(0이 존재) : 음수 중 가장 큰 값 *0
*		else : res += 음수 중 가장 큰 값
*	else
*		가장 작은 것들 부터 묶어서 곱해주고, 더해준다.
*
* Positive의 경우
*	if(+가 홀수 개)
*		가장 작은 것은 그냥 더하고, 나머지를 묶어서 곱해준다
*
* ** 묶는다 => 홀수인 경우에는 1을 하나 더 곱해준다.
* ** 1은 곱하는 것 보다 더하는게 커진다.
*
*
*	어떤 예외가 있는지 진짜 못찾겠다...
*/
#include <iostream>
#include <vector>
#include <algorithm>

namespace number
{

	using namespace std;

	vector<int> vPositive;
	vector<int> vNegative;
	int iNum = 0;
	int zeroCnt = 0;
	int oneCnt = 0;
	int iTotalNum;

	int main(void)
	{
		cin >> iTotalNum;

		for (int i = 0; i < iTotalNum; i++)
		{
			cin >> iNum;
			if (iNum > 0) vPositive.push_back(iNum);
			else if (iNum < 0) vNegative.push_back(iNum);
			else if (iNum == 0) zeroCnt++;
			else oneCnt++;

		}

		if (vPositive.size() % 2 == 1)
			vPositive.push_back(1);
		if (vNegative.size() % 2 == 1)
		{
			if (zeroCnt == 0) vNegative.push_back(1);
			else vNegative.push_back(0);
		}
		sort(vPositive.begin(), vPositive.end());
		sort(vNegative.begin(), vNegative.end());

		int res = 0;
		res += oneCnt;

		for (int i = 0; i < vPositive.size(); i += 2)
		{
			res += vPositive[i] * vPositive[i + 1];
		}

		for (int i = 0; i < vNegative.size(); i += 2)
		{
			res += vNegative[i] * vNegative[i + 1];
		}
		cout << res;

		return 0;
	}

}