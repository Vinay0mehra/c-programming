# include<stdio.h>
# include<stdlib.h>

int main()
{
    // use of malloc
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }
    
    return 0 ;
}