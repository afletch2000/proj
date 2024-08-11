#include <stdio.h>
#include "deck.h"

void print_card(struct card c){
    char *s;
    char *v;
    switch(c.s){
        case clubs:    s = "clubs";    break;
        case hearts:   s = "hearts";   break;
        case spades:   s = "spades";   break;
        case diamonds: s = "diamonds"; break;
        case jokers:   s = "jokers"; break;
        default:       s = "ERROR: Not a possible suit";
    };
    switch(c.v){
        case two:   v = "two";   break;
        case three: v = "three"; break;
        case four:  v = "four";  break;
        case five:  v = "five";  break;
        case six:   v = "six";   break;
        case seven: v = "seven"; break;
        case eight: v = "eight"; break;
        case nine:  v = "nine";  break;
        case ten:   v = "ten";   break;
        case jack:  v = "jack";  break;
        case queen: v = "queen"; break;
        case king:  v = "king";  break;
        case ace:   v = "ace";   break;
        case joker: v = "joker"; break;
        default:    v = "ERROR: Not a possible value";
    };
    printf("%s of %s", v, s);
};
