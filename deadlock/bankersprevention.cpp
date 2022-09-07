#include<stdio.h>
int  main()
{
    int c[10][10], a[10][10], av[10], i, j, k, m, n , ne[10][10], flag = 0;
    printf("Enter the matrix");
    scanf("%d %d", &m, &n);
    printf("Enter the claim matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d", &c[i][j]);

    }
    printf("\nEnter the allocated matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d", &a[i][j]);
    }
    printf("\n The need matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            ne[i][j] = c[i][j] - a[i][j];
            printf("\t%d", ne[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter the available matrix:");
    for(i=0;i<n;i++)
    {
        scanf("%d", &av[i]);
    }
    printf("Claim matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    printf("\n Allocated matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("Available matrix:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", av[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(av[j]>=ne[i][j])
            {
                flag = 1;
            }
            else
            flag = 0;
        }
    }
    if(flag==0)
    {
        printf("Unsafe state");
    }
    else
    printf("Safe state");



}