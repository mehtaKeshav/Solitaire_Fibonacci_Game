
#include "Card.h"
#include<iostream>
#include <iomanip>
using namespace :: std;

Card :: Card(){

}
Card :: Card(char r, char s){
    rank = r;
    suit = s;
}
void Card :: setCard(char r, char s){
    this->rank = toupper(r);
    this->suit = s;
}
int Card :: getValue(){
    if(this->rank == 'A'){
        return 1;
    }
    else if(this->rank == 'T' || this->rank == 'J' || this->rank == 'K' || this->rank == 'Q' ){
        return 10;
    }
    else{
         return (int) rank - 48;
    }
}
void Card :: display(){
    if(rank == 'T'){
        cout <<setw(2)<< right <<  "10" << suit << ", ";
    }
    else{
        cout <<setw(2)<< right << rank << suit << ", ";
    }
    
}