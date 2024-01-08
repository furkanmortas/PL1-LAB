#include<stdio.h>
#include<stdlib.h>

int main()

{
  int a;
  int b;
  int c;

  printf("a b c degerlerini giriniz\n");
  scanf ("%d",&a);
  scanf ("%d",&b);
  scanf ("%d",&c);

  if (a>b&&a>c)
  {
      printf("  a degeri en buyuktur\n ");
  }

  else if (b>c&&b>a)
  {
      printf("b  degeri en buyuktur\n");
  }
    else if (c>a&&c>b)

    {
        printf(" c degeri en buyuktur\n");
    }

    else
    {
        printf("sayilar esittir\n");

    }
   return 0;
  }
