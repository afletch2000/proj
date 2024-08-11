#include <stdio.h>
#include <stdlib.h>
#include "deck.h"

void print_card(struct Card c){
    char *s;
    char *v;
    switch(c.suit){
        case Clubs:    s = "clubs";    break;
        case Hearts:   s = "hearts";   break;
        case Spades:   s = "spades";   break;
        case Diamonds: s = "diamonds"; break;
        case Jokers:   s = "jokers"; break;
        default:       s = "ERROR: Not a possible suit";
    };
    switch(c.value){
        case Two:   v = "two";   break;
        case Three: v = "three"; break;
        case Four:  v = "four";  break;
        case Five:  v = "five";  break;
        case Six:   v = "six";   break;
        case Seven: v = "seven"; break;
        case Eight: v = "eight"; break;
        case Nine:  v = "nine";  break;
        case Ten:   v = "ten";   break;
        case Jack:  v = "jack";  break;
        case Queen: v = "queen"; break;
        case King:  v = "king";  break;
        case Ace:   v = "ace";   break;
        case Joker: v = "joker"; break;
        default:    v = "ERROR: Not a possible value";
    };
    printf("%s of %s", v, s);
};

struct Deck* deck_init(){
    struct Deck *d;
};

void shuffle(struct Deck *d){

};

struct Card draw(struct Deck *d){

};

void add_node(struct Node *prev, struct Node *new){
    new->next = prev->next;
    prev->next = new;
};

void delete_node(struct Deck *d, struct Node *old){

};
