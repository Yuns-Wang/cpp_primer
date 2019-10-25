#include "Chapter6.h"

int fact(int i)
{
    int ans = 1;
    for (int j = 1; j <= i; ++j)
    {
        ans *= j;
    }
    return ans;
}
