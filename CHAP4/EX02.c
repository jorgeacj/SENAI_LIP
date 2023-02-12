#include <stdio.h>

int main ( void )
{
    int val ;

    printf  ( "\tEste programa escreve na tela o ASCII e o hexadecimal de um valor decimal de entrada\n\n" ) ;
    printf  ( "Entre com o valor a ser convertido: " ) ;
    scanf   ( "%d" , &val)  ;
    printf  ( "\nO número %d em ASCII é " , val ) ;
    putchar ( val ) ;
    printf  ( " e 0x%x em hexadecimal " , val ) ;
    printf  ( "\n\n" ) ;

    return 0;
}