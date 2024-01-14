#include<stdio.h>

//Fonksiyona gönderilen beþ sayýnýn ortalamasýný hesaplayýp geri döndüren programý yazýnýz.

float ortalamahesapla(int sayi1,int sayi2,int sayi3,int sayi4,int sayi5);
int main()
{
    int sayi1,sayi2,sayi3,sayi4,sayi5;

    printf("lutfen 5 sayi giriniz\n");
    scanf("%d %d %d %d %d",&sayi1,&sayi2,&sayi3,&sayi4,&sayi5);

    float ortalama = ortalamahesapla( sayi1, sayi2,sayi3, sayi4, sayi5);
    printf("girilen sayininin ortalamasi =%.2f",ortalama);
    return 0;
}
float ortalamahesapla(int sayi1,int sayi2,int sayi3,int sayi4,int sayi5)
{
    float ortalama;
    ortalama=(sayi1+sayi2+sayi3+sayi4+sayi5)/5;
    return ortalama ;
}
