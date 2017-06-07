/* ex02-05.c */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char buffer[256];
    printf( "Enter your name and press <Enter>:\n");
    fgets( buffer );

      printf( "\nYour name has %d characters and spaces!",
                      strlen( buffer ));

     return 0;
}
