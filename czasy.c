#include <stdio.h>
#include <time.h>

time_t porownaj(time_t czas1, time_t czas2){
    double roznica = difftime(czas1, czas2);
    if (roznica<0) return(czas2);
    else return(czas1);
}

int main() {
    time_t dzis;
    time(&dzis);
    time_t jutro=dzis+86400;
    time_t porownany=porownaj(dzis, jutro);
    printf("%s", ctime(&porownany));
}