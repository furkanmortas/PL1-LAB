#include<stdio.h>
#include<stdlib.h>

int main()
{
  float dizi[10] ;
  int i;
  float karesi;

  for(i=0;i<10;i++)
  {
      printf("lutfen bir deger giriniz\n");
      scanf("%f",&dizi[i]);
      karesi=dizi[i]*dizi[i];
      if(dizi[i]==-1)
      {
        break ;
      }
      else
      {
          printf("%d numarali degerin karesi %.2f\n",i,karesi);
      }

  }
  return 0;
}
