#include<stdio.h>
#include<stdlib.h>

int main()

{
    float fahrenheit;

    printf("fahrenheit degerini giriniz\n");
    scanf("%f",&fahrenheit);

    printf("%f celcius",(fahrenheit-32)/1.8);
}
