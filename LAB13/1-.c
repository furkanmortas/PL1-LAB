#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int alan(int kenar);
int main()
{
    int a;
    printf("karenin kenarini giriniz\n");
    scanf("%d",&a);
    alan(a);

}
int alan(int kenar)
{
    int sonuc;
    sonuc=kenar*kenar;
    printf("karenin alani = %d ",sonuc);
    return sonuc;
}














