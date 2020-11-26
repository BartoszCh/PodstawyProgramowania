#include <stdio.h>
#include <stdlib.h>

 int main (){
     FILE *liczby;
      if((liczby = fopen("liczby.txt", "r")) == NULL) 
      { 
         printf("Pliku nie udalo sie otworzyc");
         exit(1);
      }

    float suma=0;
    float dodaj;

    for(int i=0; i<10; i++){
        fscanf(liczby, "%f", &dodaj);
        suma+=dodaj;
        }

    float srednia = suma/10;
    printf("%f", srednia);

    fclose(liczby);
 }