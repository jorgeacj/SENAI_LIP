#include <stdio.h>

int main ( void )
{
    int a ;
    int b ;

    printf ( "\t Esse programa calcula a media aritmetica entre dois valores \n\n" ) ;
    printf ( "Entre com o primeiro valor: " ) ;
    scanf  ( "%d" , &a ) ;
    printf ( "\nEntre com o segundo valor: " ) ;
    scanf  ( "%d" , &b ) ;
    printf ( "\n\t A media aritmetica entre %d e %d é %d \n\n" , a , b , ( a + b )/2 ) ;

    return 0 ;
}