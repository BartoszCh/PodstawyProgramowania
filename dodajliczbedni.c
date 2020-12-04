#include <stdio.h>
#include <time.h>

time_t dodaj(time_t czas, int dni){
    return(czas+dni*60*60*24);
}

int main() {
    time_t dzis;
    time(&dzis);
    time_t pojutrze=dodaj(dzis, 2);
    printf("%s", ctime(&pojutrze));
}