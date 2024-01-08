#include <stdio.h>

int main(void){
    int sayi, basamak,i;
    int dizi[5];

    printf("5 basamakli sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi<=99999) {

        for (i=0; i<5; i++)
        {
            basamak = sayi % 10;

            dizi[i]=basamak;
            printf(" dizi[%d] %d\n",i, dizi[i]);

            sayi= sayi /10;
            if (sayi==0) {
                break;

            }
        }
    }
    else
        printf("lutfen 5 basamakli sayi giriniz: ");
    return 0;
}


