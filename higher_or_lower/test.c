#include <stdio.h>
#include "deck.h"

int main(int argc, char *argv[]){
    struct card c;
    c.s = 2;
    c.v = 4;

    printf("Card chosen is ");
    print_card(c);
    printf("\n");
    return 0;
}
