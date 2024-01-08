#include<stdio.h>
#include<stdlib.h>
//Klavyeden girilen bir string içerisindeki kelimelerde kaçar tane “a” karakteri geçtiðini bularak ekrana yazdýran
//programýn C kodunu yazýnýz.
int main()
{
   char string[124];
   int i;
   int kelime=0 , sayac=0;

   printf("bir string giriniz\n");
   gets(string);

   for(i=0;string !='\0';i++)
   {
       if(string[i]== 'a')
       {
        sayac++;
       }
        else if (string[i] == ' ')
        {
            kelime++;
            printf("%d. kelimede %d adet a harfi vardir\n",kelime,sayac);
            sayac=0;
        }
   }
   kelime ++;
   printf("%d. kelimede %d adet e harfi vardir\n",kelime,sayac);
}
