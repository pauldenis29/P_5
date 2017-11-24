#include <stdio.h>
#include <stdlib.h>

// Programma calcolo massimo comune divisore (MCD) con formula di Eulero o metodo dei resti

int main()
{
    int A, B, temp;

    printf("Inserire due numeri per il calolo dell'MCD:\n");
    scanf("%d%*c%d", &A, &B); //%*c %c con asterisco per ovviare al problema dello spazio della scanf

    if(A % B == 0 || B % A == 0)
    {
        if(A > B)
        {
            printf("L'MCD tra %d e %d e': %d\n", A, B, B );
        }
        else
        {
            printf("L'MCD tra %d e %d e': %d\n", A, B,  A);
        }
    }
    else
    {
        while(A % B != 0)
        {
            temp = A % B;
            A = B;
            B = temp;
        }
        printf("Il MCD tra %d e %d e' %d\n", A, B, temp);
    }



    return 0;
}
