#include "Header.h"

int main()
{
    int arr[] = { 92,43,53,12,32,45 };
    int sz = sizeof(arr) / sizeof(int);
    BubbleSort2(arr, &arr[sz]);
    PrintArray(arr, sz);
    return 0;
}