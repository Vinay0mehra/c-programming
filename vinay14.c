#include <stdio.h>

int sum(int arr[])
{
    int sum_of_array = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum_of_array += arr[i];
    }
    return sum_of_array;
}

int main()
{
    int result, array[] = {23, 33, 44, 55};
    result = sum(array);
    printf("Result = %d", result);
    return 0;
}