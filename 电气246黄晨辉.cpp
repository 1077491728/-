﻿#include <stdio.h>
int  main()
{
    int a[6] = {};
    int i = 0;
    int t;
    printf("请输入6各数字")
    while (i < 6)
    {
        scanf_s("%d", &a[i]);
        i++;
    }
    for (int e = 0; e < 6 - 1; e++)
    {
        for (int m = 0; m < 5 - e; m++)
        {
            if (a[m] > a[m + 1])
            {
                t = a[m];
                a[m] = a[m + 1];
                a[m + 1] = t;
            }

        }

    }
    printf("它们从小到大是")
    for (int z = 0; z < 6; z++)
    {
        printf("  %d   ", a[z]);

    }
}