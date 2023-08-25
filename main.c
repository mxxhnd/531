#include <stdio.h>
#include <stdlib.h>

void swap(int * ,int *);
int main()
{
    int A,B;
    printf("Insert The First Number : ");
    scanf("%d",&A);
    printf("Insert The Second Number : ");
    scanf("%d",&B);

    printf("Before Swapping: A=%d, B=%d \n",A,B);
    swap(&A,&B);

    printf("After Swapping: A=%d, B=%d \n\n",A,B);

    return 0;
}

void swap(int *x,int *y)
{
    int tmp;
    tmp = *x;
    *x=*y;
    *y= tmp;
}
