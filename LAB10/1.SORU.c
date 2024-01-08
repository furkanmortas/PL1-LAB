#include<stdio.h>
#include<stdlib.h>

int main()
{
  float dizi[8];
  float sonuc=0 ;
  int i;


  printf("8 adet deger giriniz\n");

  for(i=0;i<8;i++)
  {
      scanf("%f",&dizi[i]);
      sonuc=sonuc+dizi[i];
  }
  printf("ortalama= %f",sonuc/8);
  return 0;
}
