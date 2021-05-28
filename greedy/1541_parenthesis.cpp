#include <iostream>
#include <string>

using namespace std;
/*  Problem : 괄호를 이용하여 최솟값 만들기
 *  input : 수식 ex) 55-50+40
 *
 *  IDEA
 *  1) +끼리 다 묶으면 됨
 *  2) << - 이후에 괄호로 다 묶자
 *
 *  CORE < "표현 방법의 문제 존재"
 *  0) 입력 값을 어디에 저장? < array?, string?
 *  1) -기호를 찾고
 *  2) 처음 - 찾고 그 뒤에 "(" 괄호 입력. 다음 -를 만나면 ")"입력
 *
 *  1) 처음 만나는 - 이후의 +는 모두 -취급.
 *  2) 언제 처음 만나는지 확인하면 문제 해결.
 *  3) 논리회로의 0 1 관계와 같음
 * 
 *  etc
 *  argc = arguments count  :: 함수에 전달된 인자의 개수
 *  argv = arguments vector :: (가변적인 개수의) 문자열
 *  문자열 끝에는 항상 \0이 삽입
 */
namespace parenthesis
{

string str;
string stemp = "";
int ires = 0;
bool isMinus = false;

int minRes()
{
    for(int i =0; i<str.length(); i++)
    {
        //연산자를 만나는 경우
        if(str[i] == '+' || str[i] == '-' || str[i] == '\0')
        {
            if(isMinus)
            {
            ires += stoi(stemp);
            }
            else
            {
            ires -= stoi(stemp);
            }

            //처음으로 minus를 만나면 isMinus를 ture로 바꿔준다
            if(str[i] == '-') isMinus = true;

            stemp = "";
        }
        //숫자를 만나는 경우
        stemp = str[i];
    }
}

int smain()
{
    scanf("%s", str);

    minRes();

    printf("%d", ires);
}


}