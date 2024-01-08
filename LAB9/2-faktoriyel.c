#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int sonuc=1;

    printf("n degerini giriniz\n");
    scanf("%d",&n);

    while(n!=1)
    {
        sonuc=sonuc*n;
        n--;
    }
    printf("%d\n",sonuc);
}
