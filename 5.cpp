#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1)); //output: 60 - 10
    printf("%c", (char)(*ptr2 - *ptr1)); // out: '2'
    return 0;
}

//the code run correctly
