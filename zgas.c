#include <stdio.h>
#include <stdbool.h>

bool isEnabled(long long number, unsigned bit){
    if(number & 1<<bit) return(true);
    return(false);
}

int disableBit(long long number, unsigned bit2Enable){
     return(number & ~(1<<bit2Enable));
 }

 int main() {
    long long n = 25;
    unsigned bit = 0;
    if (isEnabled(n, bit)) printf("zapalony\n");
    else printf("niezapalony\n"); 

    if (isEnabled(disableBit(n, bit), bit)) printf("zapalony\n");
    else printf("niezapalony\n");    
 }