#include <stdio.h>
#include <stdlib.h>
 
 int main (){
    FILE *shrek;
      if((shrek = fopen("Shrek.txt", "w")) == NULL) 
      { 
         printf("Pliku nie udalo sie otworzyc");
         exit(1);
      }

    fprintf(shrek, "Ogry są jak cebula.");
    fclose(shrek);

      if((shrek = fopen("Shrek.txt", "a")) == NULL) 
      { 
         printf("Pliku nie udalo sie otworzyc");
         exit(1);
      }

    fprintf(shrek, "\nOgry mają warstwy.");
    fclose(shrek);
 }