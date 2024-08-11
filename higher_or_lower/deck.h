#ifndef DECK_H
#define DECK_H

#include <stdint.h>

enum Suit {
    Clubs,
    Hearts,
    Spades,
    Diamonds,
    Jokers
};
enum Value {
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace,
    Joker
};

struct Card {
    enum Suit suit;
    enum Value value;
};
struct Node {
    struct Card c;
    struct Node *next;
};
struct Deck {
    int numcards;
    struct Node *top;
};

void print_card(struct Card c);
struct Deck* deck_init();
void shuffle(struct Deck*);
struct Card draw(struct Deck*);
void add_node(struct Node*, struct Node*);
void delete_node(struct Deck*, struct Node*);

#endif
