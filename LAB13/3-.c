#include<stdio.h>

//3- Bir sayýnýn çift mi tek mi olduðunu kontrol eden fonksiyonu ve kullanýmýný gösteren programý yazýnýz


int ciftmitekmi(sayi)
{
  if(sayi%2==0)
  {
      printf("sayi cifttir");

  }
  else
  {
      printf("sayi tektir");
  }


}
int main()
{
    int girilensayi;
    printf("sayi gir\n");
    scanf("%d",&girilensayi);
    ciftmitekmi(girilensayi);
}

