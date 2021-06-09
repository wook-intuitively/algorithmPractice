/*
 *  IDEA
 *  vector에 받아온 string 값 저장
 *  알파벳 배열에 추가해주는 과정
 *  크기 순으로 나열
 *  배열[0]부터 9,8,7 .. 곱해서 마무리
 *
 *  "항상 예시를 들어서 일반화 시키는 방법으로 문제 풀 것
 *  */
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

namespace mathWord
{
int iNum,res =0;
//배열 초기화
int iAlphabet[26]={0,};
vector<string> vInputword;

int main()
{
    cin >> iNum;
    for (int i = 0; i <iNum; ++i)
    {
        string tmp ="";
        cin >> tmp;
        vInputword.push_back(tmp);
    }
    for (int i = 0; i < iNum; ++i)
    {
        for (int j =vInputword[i].length()-1; j >= 0; j--)
        {
            //위치  : char 기준 값인 'A'로 빼주어 진행
            int iAlphabetPosition = vInputword[i][j] - 'A';
            //value
            int iValue = pow(10,vInputword[i].length()-j-1);
            //알파벳 배열에 저장 (위치, 값)
            iAlphabet[iAlphabetPosition] += iValue;
        }
    }
    sort(iAlphabet,iAlphabet+26,greater<>());
    for (int i = 0; i <10; ++i)
    {
        iAlphabet[i] *= 9-i;
        res += iAlphabet[i];
    }
    cout << res <<endl;


    return 0;
}
}