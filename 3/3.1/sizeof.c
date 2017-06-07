/* sizeof.c--Program to tell the size of the C variable */
/*            type in bytes */

#include <stdio.h>

int main(void){

  printf( "\nA char       is %d bytes", sizeof( char ));
  printf( "\nAn int       is %d bytes", sizeof( int ));
  printf( "\nA short      is %d bytes", sizeof( short ));
  printf( "\nA long       is %d bytes", sizeof( long ));
  printf( "\nA long long  is %d bytes\n", sizeof( long long ));
  printf( "\nA unsigned char      is %d bytes", sizeof( unsigned char ));
  printf( "\nA unsigned int       is %d bytes", sizeof( unsigned int ));
  printf( "\nA unisigned short    is %d bytes", sizeof( unsigned short ));
  printf( "\nA unisigned long     is %d bytes", sizeof( unsigned long ));
  printf( "\nA unsigned long long is %d bytes\n\n",
                                  sizeof( unsigned long long ));

  printf( "\bA float       is %d bytes\n", sizeof ( float ));
  printf( "\bA double      is %d bytes\n", sizeof ( double ));
  printf( "\bA long double is %d bytes\n", sizeof ( long double ));

  return 0;
}
