#include <stdio.h>
#include "deck.h"

int main(int argc, char *argv[]){
    struct Card c;
    c.suit = 2;
    c.value = 4;

    printf("Card chosen is ");
    print_card(c);
    printf("\n");
    return 0;
}
