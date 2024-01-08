#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int sicaklik;

    printf("bir sicaklik degeri giriniz\n",sicaklik);
    scanf("%d",&sicaklik);

    if(sicaklik<0)
    {
        printf("sicaklik  donma noktasinin altindadir",sicaklik);

    }

    else if (sicaklik=0)
    {
        printf("sicaklik donma noktasindadir\n",sicaklik);
    }
    else
    {
        printf(" sicaklik donma noktasinin uzerindedir\n",sicaklik);
    }
    return 0;
}
