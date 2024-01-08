#include<stdio.h>
#include<stdlib.h>



int main(){

    int dizi[10];
    int number, j=9;
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number\n");
        scanf("%d", &number);
        dizi[j]=number;
        j=j-1;
    }
    for ( j = 0; j < 10 ; j++)
    {
        printf("%d ", dizi[j]);
    }


    return 0;
}
