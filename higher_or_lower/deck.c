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

struct Deck* deck_init(uint8_t include_jokers){
    struct Deck *d = malloc(sizeof(struct Deck));
    d->top = NULL;
    uint8_t numcards;
    for(numcards=51;numcards>=0;numcards--){
        struct Node *n = malloc(sizeof(struct Node));
        n->c.suit  = numcards/13;
        n->c.value = numcards%13;
        add_node_to_top(d,n);
    }
    if(include_jokers){
        for(numcards=0;numcards<2;numcards++){
            struct Node *n = malloc(sizeof(struct Node));
            n->c.suit  = Jokers;
            n->c.value = Joker;
            add_node_to_top(d,n);
        }
    }
    return d;
};

void shuffle(struct Deck *d){

};

struct Card draw(struct Deck *d){

};

void add_node(struct Node *p, struct Node *n){
    n->next = p->next;
    p->next = n;
};

void add_node_to_top(struct Deck *d, struct Node *n){
    n->next = d->top;
    d->top = n;
};

void delete_node(struct Deck *d, struct Node *old){
    struct Node *p = find_p_node(d,old);
    if(old == d->top){
        d->top = old->next;
    }
    else{
        p->next = old->next;
    {
    free(old);
};

struct Node* find_p_node(struct Deck *d, struct Node *n){
    struct Node *c = d->top;
    struct Node *p = d->top;
    while(c != n){
        *p=c;
        if(c->next){
            c=c->next;
        }
        else{
            p = NULL;
            break;
        }
    }
    return p;
};

uint8_t card_equal(struct Card c0, struct Card c1){
    uint8_t eq = 0;
    if(c0.suit==c1.suit && c0.value==c1.value){
        eq = 1;
    }
    return eq;
};
