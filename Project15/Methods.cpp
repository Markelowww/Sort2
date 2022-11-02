#include <stdio.h>

void BubbleSort2(int* a, int* n)
{
    int flag = 1;
    int* a2 = a;
    do {
        flag = 0;
        a = a2;
        while (*a != *(n))
        {
            if (*a < *(a - 1))
            {
                int temp = *a;
                *a = *(a - 1);
                *(a - 1) = temp;
                flag = 1;
            }
            a++;
        }
    } while (flag);
}

void PrintArray(int* a, int sz)
{
    for (int i = 0; i < sz; i++)
        printf("a[%d] = %d\n", i, a[i]);
}