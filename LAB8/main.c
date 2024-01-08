#include<stdio.h>
int main()
{   int x,y,z;
    printf("x y z degeri giriniz\n");

    scanf("%d %d %d",&x,&y,&z);
     if (x>y&&x>z)
   {
     printf("en buyuk sayi x=%d\n",x);
   }
   else if(y>x&&y>z)
   {
     printf("en buyuk sayi y=%d\n",y);
   }
   else if (z>x&&z>y)
   {
     printf("en buyuk sayi z=%d\n",z);
   }
   else
   {
    printf("sayilar eþittir");
   }
return 0;  
}
