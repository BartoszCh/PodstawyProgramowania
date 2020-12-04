#include <stdio.h>
#include <stdbool.h>

bool isEnabled(long long number, unsigned bit){
    if(number & 1<<bit) return(true);
    return(false);
}

int main() {
    if (isEnabled(25, 1)) printf("zapalony");
    else printf("niezapalony");    
}