#include <stdio.h>
#include <stdlib.h>
 
 int main (){
    FILE *przyklad;
      if((przyklad = fopen("przydklad.txt", "r")) == NULL) 
      { 
         perror("Pliku nie udalo sie otworzyc");
         exit(1);
      }
      else printf("Plik udalo sie otworzyc\n");
    
    char odczyt[1000];
    fscanf(przyklad, "%s", odczyt);
    printf("%s", odczyt);

    fclose(przyklad);
 }