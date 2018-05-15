#include <stdio.h>
#include <stdlib.h>

int fibo (int n){
    if (n==1){
        return 0;
    }
    if (n==2){
        return 1;
}
    return fibo(n-1)+fibo(n-2);
}
/*int main()
{
    int n;
    printf ("dien so thu n trong day:");
    scanf ("%d",&n);
    printf("so thu %d trong day la %d:",n,fibo(n));
    return 0;
}*/
int giaithua(int n)
{
    if (n==0){
        return 1;
    }
    return giaithua(n-1)*n;
}
int main ()
{
    int n;
    printf ("nhap so n:");
    scanf ("%d",&n);
    printf ("giai thua cua %d la %d",n,giaithua(n));
    return 0;
}



