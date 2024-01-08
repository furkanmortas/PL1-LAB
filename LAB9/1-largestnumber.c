#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;

    printf("a sayisinin degerini giriniz\n");
    scanf("%d",&a);

    printf("b sayisinin degerini giriniz\n");
    scanf("%d",&b);

    printf("c sayisinin degerini giriniz\n");
    scanf("%d",&c);

    if(a>b&&a>c)
    {
        printf("a en buyuk degerdir\n");
    }
    else if(b>a&&b>c)
    {
        printf("b en buyuk degerdir\n");
    }

    else if (c>a&&c>b)
    {
        printf("c en buyuk degerdir\n");
    }
    else
    {
        printf("sayilar birbirine esittir\n");
    }
    return 0;
}
