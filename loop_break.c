#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("Current number: %d\n", i);
    }
    printf("Loop exited.\n");
    return 0;
}