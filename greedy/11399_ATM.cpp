#include <iostream>
#include <algorithm>

using namespace std;

namespace ATM
{
int nPerson, res = 0;
int arrayDraw[1000];
int main()
{
    //input
    scanf("%d",&nPerson);
    for(int i =0; i<nPerson; i++)
    {
        scanf("%d",&arrayDraw[i]);
    }
    //sorting
    sort(arrayDraw, arrayDraw+(nPerson));
    //cal
    for(int i =0; i<nPerson; i++)
    {
        res += (nPerson-i) * arrayDraw[i];
    }

    printf("%d", res);

    return 0;
}
}