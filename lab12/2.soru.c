#include<stdio.h>
#include<stdlib.h>
// Klavyeden girilen iki kelimeden ikincinin sonuna birinci kelimenin tersini ekleyerek ekrana yazd�ran
//program� C dili ile yaz�n�z. �rnek �al��ma ekran� a�a��da verilmi�tir.

int main()
{
 char first[124], second[138];
 int i ,sayac=0;

 printf("1. kelimeyi giriniz\n");
 gets(first);
 printf("2. kelimeyi giriniz\n");
 gets(second);

 for(i=0;first[i]!= '\0';i++)
 {
 sayac++;
 }
 printf("%s",second);
 for(i=sayac-1; i>=0;i--)
 {
     printf("%c",second[i]);
 }


}
