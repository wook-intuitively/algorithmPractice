/*
	�ּ��� ��
	IDEA : �ּ� ����, ���ϱ�

*/
#include <iostream>
#include <queue>

using namespace std;
namespace tester
{


int n, res;
priority_queue<int, vector<int>, greater<int>> pq;

int method(void) 
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int iNum;
		cin >> iNum;
		pq.push(iNum);
	}

	while (pq.size() != 1)
	{
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();

		res += a + b;
		pq.push(a + b);
	}
	cout << res << '\n';
	return 0;
}
}