/*
*	��� ���� = vector ��� ����
*
*	negative�� positive, 0�� �ִ� ���� ���� + 1�ִ� ��쿡��, ���� �����ִ°� �´�.
*	(0�� �ִ��� 1�� �ִ��� �˾ƾ� ��)
*	���� ���� ������ ���� �� ����.
*
* Negative�� ���
*   if(-�� Ȧ�� ��)
*		if(0�� ����) : ���� �� ���� ū �� *0
*		else : res += ���� �� ���� ū ��
*	else
*		���� ���� �͵� ���� ��� �����ְ�, �����ش�.
*
* Positive�� ���
*	if(+�� Ȧ�� ��)
*		���� ���� ���� �׳� ���ϰ�, �������� ��� �����ش�
*
* ** ���´� => Ȧ���� ��쿡�� 1�� �ϳ� �� �����ش�.
* ** 1�� ���ϴ� �� ���� ���ϴ°� Ŀ����.
*
*
*	� ���ܰ� �ִ��� ��¥ ��ã�ڴ�...
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