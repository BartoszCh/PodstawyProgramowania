 #include <stdio.h>
 #include <stdlib.h> 
 #include <time.h>

struct czlowiek{
    char imie[100];
    double waga;
    double promileAlkoholu;
};

struct Alkohol{
    int procent;
    char nazwa[100];
};

void odplyneli(struct czlowiek imprezowicze[]){
    for(int i=0; i<3; i++){
        if(imprezowicze[i].promileAlkoholu>=2) {printf("%s, ", imprezowicze[i].imie);}
    }
    printf("juz odplyneli...\n");
}

void kolejka(struct czlowiek imprezowicze[], struct Alkohol alkohol, int ilosc){
    for(int i=0; i<3; i++){
        imprezowicze[i].promileAlkoholu+=ilosc*alkohol.procent*0.01/imprezowicze[i].waga;
    }
}

void impreza(struct czlowiek imprezowicze[], struct Alkohol alkohole[]){
    double losuj = rand();
    int typ = (int)losuj%2;
        odplyneli(imprezowicze);
        printf("Wszyscy pija %s\n", alkohole[typ].nazwa);
        kolejka(imprezowicze, alkohole[typ], 350);
        odplyneli(imprezowicze);
}

 int main() {
    srand(time(NULL));
    struct czlowiek Andrzej = {"Andrzej", 68, 1.5};
    struct czlowiek Albert = {"Albert", 68, 2.1};
    struct czlowiek Alojzy = {"Alojzy", 68, 2.7};

    struct czlowiek imprezowicze[3]={Andrzej, Albert, Alojzy};

    struct Alkohol napoj1 = {40, "wodka"};
    struct Alkohol napoj2 = {16, "piwo"};

    struct Alkohol alkohole[2]={napoj1, napoj2};

    impreza(imprezowicze, alkohole);
 }