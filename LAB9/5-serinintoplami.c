#include<stdio.h>
#include<stdlib.h>

 int main(){

    double i, x, c, f=1, sum;
    printf("enter a number for x \n");
    scanf("%lf", &x);
    printf("enter a number for end of the sum\n");
    scanf("%lf", &c);
    for ( i = 1; i <= c; i++)
    {
        f = f * i;
        sum = sum + pow(x,i)/f;
    }
    sum = sum + 1;
    printf("sum: %lf", sum);

    return 0;

}
