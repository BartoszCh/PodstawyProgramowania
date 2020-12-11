#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int start = 0;

typedef struct wezel{
	int value;
    struct wezel *left;
    struct wezel *right;
} wezel;

wezel *stworz(int n) {
    wezel *a;

    int wpisz;
    printf("Wpisz wartosc: ");
    scanf("%d", &wpisz);
    if(wpisz<0) return NULL;
    a=(wezel*)malloc(sizeof(wezel));
    a->value=wpisz;

    printf("Tworzenie lewej galezi, wysokosc %d.\n", n+1);
    a->left=stworz(n+1);
    printf("Tworzenie prawej galezi, wysokosc %d.\n", n+1);
    a->right=stworz(n+1);
    return a;
}

int maksymalna(wezel *a, int n) {
    if (a == NULL) 
        return n;
    else {
        int lewo = maksymalna(a->left, n+1);
        int prawo = maksymalna(a->right, n+1);
        if (lewo > prawo) return lewo;
        else return prawo;
    }
}

int minimalna(wezel *a, int n) {
    if (a == NULL) 
        return n;
    else {
        int lewo = minimalna(a->left, n+1);
        int prawo = minimalna(a->right, n+1);
        if (lewo < prawo) return lewo;
        else return prawo;
    }
}

bool znajdz(wezel *a, int n) {
    if (a == NULL) return false;
    if (a->value == n) return true;
    if(znajdz(a->left, n) == true || znajdz(a->right, n) == true ) return true;
    else return false;
}


int main() {
    wezel *drzewo=stworz(start);
    int wys = maksymalna(drzewo, start);
    printf("%d\n", wys);
    int mini = minimalna(drzewo, start);
    printf("%d\n", mini);
    if(znajdz(drzewo, 27)==true) printf("Element znajduje sie w drzewie.\n");
    else printf ("Element nie znajduje sie w drzewie.\n");
} 