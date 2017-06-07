/* list_it.c__This program displays a listing with line numbers! */
#include <stdio.h>
#include <stdlib.h>
#define BUFF_SIZE 256
void display_usage(void);
int line;

int main(int argc, char *argv[]){

  char buffer[BUFF_SIZE];
  FILE *fp;

  if(argc<2){

    display_usage();
    return(1);

  }

  if((fp=fopen(argv[1], "r")) == NULL ){

    fprintf(stderr, "Error opening file, %s!", argv[1]);
    return(1);

  }

  line = (1);

  while(fgets(buffer,BUFF_SIZE,fp)!= NULL)
    fprintf(stdout, "%4d:\t%s", line++, buffer);

  fclose(fp);
  return 0;
}

void display_usage(void){

  fprintf(stderr, "\nProper Usage is: ");
  fprintf(stderr, "\n\nlist_it filename.ext\n");

}
