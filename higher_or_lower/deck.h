#ifndef DECK_H
#define DECK_H

enum suit {
    clubs,
    hearts,
    spades,
    diamonds,
    jokers
};

enum value {
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace,
    joker
};

struct card {
    enum suit s;
    enum value v;
};

void print_card(struct card c);

// struct deck {
//     
// };
// 
// struct card draw(struct deck);

#endif
