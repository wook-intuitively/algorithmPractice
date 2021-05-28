#include <iostream>
#include <string>

using namespace std;

string str;
string stemp = "";
int ires = 0;
bool isMinus = false;

int minRes()
{
    for(int i =0; i<str.size(); i++)
    {
        //연산자를 만나는 경우
        if(str[i] == '+' || str[i] == '-' || str[i] == '\0')
        {
            if(isMinus)
            {
                ires -= stoi(stemp);
            }
            else
            {
                ires += stoi(stemp);
            }
            stemp = "";

            //처음으로 minus를 만나면 isMinus를 ture로 바꿔준다
            if(str[i] == '-') isMinus = true;
            
            continue;
        }
        //숫자를 만나는 경우
        stemp += str[i];
    }
    return ires;
}

int main()
{
    //string 입력
    cin >> str;

    minRes();

    printf("%d", minRes());

    return 0;
}