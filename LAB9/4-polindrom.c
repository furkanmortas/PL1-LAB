#include<stdio.h>
#include<stdlib.h>

/*bastan ve sondan okunusu ayný olan sayýlara polindrom sayi denir*/

  int main(){

    int sayi, sayi1, sayi2, tersi=0, d=1, c=0;
    printf("sayi giriniz\n");
    scanf("%d", &sayi);
    sayi1 = sayi;
    sayi2 = sayi;
        while (d>0)
        {
            d=sayi%10;
            sayi=sayi/10;
            c=c+1;
        }
    c=c-1;
        while (c>0)
        {
            tersi = tersi + sayi1%10*pow(10,(c-1));
            sayi1=sayi1/10;
            c=c-1;
        }
    if (sayi2==tersi)
    {
        printf("sayi polindromdur\n");
    }
    else
    {
        printf("sayi polindrom degildir\n");
    }

    return 0;
  }
