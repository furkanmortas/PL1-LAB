#include<stdio.h>

//3- Bir say�n�n �ift mi tek mi oldu�unu kontrol eden fonksiyonu ve kullan�m�n� g�steren program� yaz�n�z


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

