/*
 0, 1의 존재 여부에 따라 다르게 푼다

 1. array 정렬
 2. array 개수
    if 홀수 :
         if 0 존재 and 1 X      :"else랑 동일"
         else if 1 존재 and 0 X :"else랑 동일"
         else if 0 and 1 존재   :"else랑 동일" +1
         else : 제일 작은 것 빼고 다 묶은 뒤 더해
    else 짝수 :
         if 0 존재 and 1 X      : 다 묶은 뒤 더하고 + array[말둘]
         else if 1 존재 and 0 X : "else랑 동일" +1
         else if 0 and 1 존재   : "else랑 동일" +1
         else                   : 다 묶은 뒤 더해
 
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int iNum;
    cin >> iNum;

    int iValue[iNum];
    for (int i = 0; i < iNum; i++)
    {
        cin >> iValue[i];
    }
    
    sort(iValue , iValue + iNum);
    
    for (int j = 0; j < iNum; j++)
    {
        cout << iValue[j] << endl;
    }
    return 0;
}
