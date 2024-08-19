#include <stdio.h>
#include "deck.h"

int main(int argc, char *argv[]){
    struct Deck *d = deck_init(0);
    while(d->numcards > 0){
        printf("Card drawn is ");
        print_card(draw(d));
        printf("\n");
    }
    free(d);
    return 0;
}
