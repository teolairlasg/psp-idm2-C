#include <stdio.h>

int main () {
   FILE *fp;

   /* now let's try to open same file */
   fp = fopen("file.txt", "r");
   if( fp == NULL ) {
      perror("Error en el open");
      return(-1);
   }
   fclose(fp);
      
   return(0);
}