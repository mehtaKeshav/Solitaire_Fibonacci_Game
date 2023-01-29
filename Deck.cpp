#include <iostream>
#include "Deck.h"
using namespace :: std;
Deck :: Deck(){
    top = 0;
    char ranks[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    char suits[4] = {'S', 'H', 'D', 'C'};
    int index = 0;
     for(int i = 0; i < 4; i++){
         for(int j = 0; j < 13; j++){
             pack[index] = Card(ranks[j],suits[i]);
             index++;
         }
     }

} 
void Deck :: refreshDeck(){
    top = 0;
    char ranks[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    char suits[4] = {'S', 'H', 'D', 'C'};
    int index = 0;
     for(int i = 0; i < 4; i++){
         for(int j = 0; j < 13; j++){
             pack[index] = Card(ranks[j],suits[i]);
             index++;
         }
     }
}
Card Deck :: deal(){
    return pack[top++];
}

void Deck :: shuffle(){
    srand(time(NULL));
    for(int i = 0; i < 100; i++){
        int index1 = rand() % 51;
        int index2 = rand() % 51;
        Card inhand = pack[index1];
        pack[index1] = pack[index2];
        pack[index2] = inhand;
    }
}
bool Deck :: isEmpty(){
    if(top == 52){
        return true;
    }
    else{
        return false;
    }
};
void Deck :: display(){
    for(int i = 0; i < 52; i++){
        if( i % 13 == 0){
            cout<< endl;
        }
         pack[i].display();
    }
    cout << endl;
};

