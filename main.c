#include <stdio.h>
#include <stdlib.h>

/*void test (int n) {
    if (n==0)
        return;
    printf ("%d",n%10);
    test (n/10);
    return ;
}
*/

/*int maxdigit (int n)
{
    int digit=n%10;
    n=n/10;
    if (n!=0)
    {
        if (digit>maxdigit(n))
        {
            return digit;
        }
        else
            return maxdigit(n);
    }
    else
        return 0;

}
*/
int main()
{
    odd ();
    //printf ("%d",maxdigit(n));//
    /*if (check(n)==1)
    {
        printf ("%d co chu so chan",n);
    }
    else
        printf ("%d chi co chu so le",n);*/

}

/*void binary (int n) {
    if (n!=0) {
        binary (n/2);
        printf ("%d",n%2);
    }
        else printf ("0");
}*/

/*int uocleMIN (int n)
{
    if (n==0)
    {
        printf ("0 khong co uoc");
        return 0;
    }
    if (n%2==1)
    {
        printf ("%d",n);
    }
    else
        uocleMIN (n/2);
    return 0;
}*/

/*int check(int n)
{
    int a=n%10;
    if (n==0)
    {
        return 1;
    }
    if (a%2==1)
    {
        if (n%10==n)
        {
            return 0;
        }
        else
            return check (n/10);

    }

    else
        return 1;

}*/

int input (int *n) {
    printf ("nhap so nguyen duong n:");
    scanf (" %d",n);
    //fflush(stdin);
}

int odd () {
    int n;
    char answer = 'y';


    while (answer=='y') {
        input (&n);
        output (n);
        printf ("\nban co muon kiem tra so khac khong? tra loi y/n: ");
        scanf (" %c",&answer);
        //fflush(stdin);  (dung de clear output buffer)
    }
    return 0;
}

void output (int n) {
    if (n%2==0) {
        printf ("%d khong phai so le",n);
        }
        else printf ("%d la so le",n);
}
