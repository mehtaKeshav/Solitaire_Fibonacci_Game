#include "Deck.h"
#include "Card.h"
#include <iostream>
using namespace :: std;

bool isFibo(int s){
    int prev = 1; 
    int prevPrev = 1; 
    for(int i = 0; i <= s; i = prev + prevPrev){
        if(i == s){
            return true;
        }
        prevPrev = prev;
        prev = i;       
    }
    return false;
}
int main(){

    int noGames = 0;
    cout<<"Welcome to Fibonacci Solitaire!"<< endl;
    cout<< "1) New Deck" << endl;
    cout <<"2) Display Deck" << endl;
    cout<<"3) Shuffle Deck" << endl;
    cout<< "4) Play Solitaire" << endl; 
    cout<< "5) Exit" << endl;
    int option;
    cin >> option;
    Deck fiboSolitaire;
    while (option != 5){
        if(option == 1){
            fiboSolitaire.refreshDeck();
        }
        else if(option == 2){
            fiboSolitaire.display();
        }
        else if(option == 3){
            cout <<'\n'<< "Shuffeling.........";
            fiboSolitaire.shuffle();
        }
        else if(option == 4){
            noGames++;
            cout << "Playing Fibonacci Solitaire !!!"<< endl;
            int sum = 0;
            int piles = 0;
            while(!fiboSolitaire.isEmpty()){
                Card played = fiboSolitaire.deal();
                played.display();
                sum += played.getValue();
                if(isFibo(sum)){
                    cout << "Fibo: "<< sum << '\n'; 
                    sum = 0;
                    piles++;
                }
            }
            if(isFibo(sum)){
                cout<< '\n' <<"Winner in " << piles << " piles!" << endl;
            }
            else{
                cout<<'\n'<< "Last Hand Value "<< sum << endl;
                cout<<"Looser in " << piles << " piles!"<< endl;
            }
            fiboSolitaire.refreshDeck();

        }
        cout <<'\n'<< "Games Played: " << noGames << endl;
        cout<< "1) New Deck" << endl;
        cout<< "2) Display Deck" << endl;
        cout<< "3) Shuffle Deck" << endl;
        cout<< "4) Play Solitaire" << endl; 
        cout<< "5) Exit" << endl;
        cin >> option;
        
    }
}



