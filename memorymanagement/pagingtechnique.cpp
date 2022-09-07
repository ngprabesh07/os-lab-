#include <stdio.h>
#include <stdlib.h>
int main()
{
    int np, ps, i;
    int *sa;
    printf("Enter how many pages  \n");
    scanf(" %d", &np);
    printf("Enter the page size \n");
    scanf(" %d", &ps);
    for (i = 0; i < np; i++)
    {
        sa[i] = (int)malloc(ps);
        printf("page%d \t address %u \n", i + 1, sa[i]);
    }
}