#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char dizi1[124];
    char dizi2[124];


    printf("dizi1  degerini giriniz\n");
    gets(dizi1 );

    printf("dizi2 degerini giriniz\n");
    gets( dizi2);

    strcat(dizi1 , dizi2);

    printf("birlestirilmis dizi : %s\n", dizi1);

    return 0;

}
