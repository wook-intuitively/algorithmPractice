#include <iostream>
#include <algorithm>

using namespace std;

namespace ATM
{
    int nPerson = 0;
    int arrayDraw[1000] = {0};
    int main()
    {
        //input
        scanf("%d",&nPerson);
        for(int i =0; i<nPerson; i++)
        {
            scanf("%d",arrayDraw[i]);
        }

        //sorting
        sort(arrayDraw, arrayDraw+nPerson+1);
        for(int i=0; i<nPerson; i++)
        {
            printf("%d", arrayDraw[i]);
        }
        //cal

        return 0;
    }
}