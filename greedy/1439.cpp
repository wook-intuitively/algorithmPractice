/*
*	���ӵ� ������� ������ �����ְ�,
*	�� �� ������ ����ϸ� ��.
*
*	�񱳴� �տ����� �ڿ����� ���� ��� / �ٸ� ���
*	zeroCnt / oneCnt
*
*
*
*	for( i = 1; i < s.length(); i++)
*		if(s[i-1] == '0')
*			if(s[i-1] == s[i])
*			else zeroCnt++;
*		else
*			if(s[i-1] == s[i])
*			else oneCnt++;
*
*   res = min(zeroCnt,oneCnt);
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
namespace nums{
int main(void)
{
	/*string s;
	cin >> s;

	int iZeroCnt = 0;
	int iOneCnt = 0;
	int iSize = s.size();

	char cLast = s[iSize];
	if (cLast == '0') strcat(s, "1");
	else strcat(s, "0");


	for (int i = 1; i < s.length(); i++)
	{
		if (s[i - 1] == '0')
		{
			if (s[i - 1] == s[i]) continue;
			else iZeroCnt++;
		}
		else
		{
			if (s[i - 1] == s[i]) continue;
			else iOneCnt++;
		}
	}
	cout << min(iZeroCnt, iOneCnt);*/
	return 0;
}
}