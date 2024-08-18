#include <stdio.h>
#include "deck.h"

int main(int argc, char *argv[]){
    struct Card c[2];
    c[0].suit = 2;
    c[0].value = 4;
    c[1].suit = 2;
    c[1].value = 4;

    printf("Card chosen is ");
    print_card(c[0]);
    printf("\n");

    printf("Card[0] == Card[1] is ");
    if(card_equal(c[0],c[1])){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}
