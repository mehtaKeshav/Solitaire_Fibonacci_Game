#include "Card.h"
#ifndef Deck_h
#define Deck_h
class Deck{
    private:
        int top;
        Card pack [52];
    public:
        Deck();
        void refreshDeck();
        Card deal();
        void shuffle();
        bool isEmpty();
        void display();


};
#endif