//cards.cpp
// demonstrates structures using playing card
#include <iostream>
using namespace std;

const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
//////////////////////////////////////////////////
struct card 
{
    int number; // 2 to 10 , jack, queen, king, ace
    int suit; // clubs , diamonds , hearts , spades

};
/////////////////////////////////////////////////
int main ()
{
    card temp, chosen, prize;  // define cards
    int position;

    card card1 = {7, clubs};
    cout << "Card 1 is the 7 0f clubs\n";

    card card2 = {jack, hearts };   // initialize card2
    cout << "Card 2 is the jack of hearts\n";

    card card3 = {ace, spades};
    cout << "Card 3 is the ace of spades\n";

    prize = card3; // copy this card to rememer it 

    cout << "I'm swapping card1 and card3\n";
    temp = card3; card3 = card1; card1 = temp;

    cout << "I'm swapping card2 and card3\n";
    temp = card3; card3 = card2; card2 = temp;

    cout << "I'm swapping card1 and card2\n";
    temp = card2; card2 = card1; card1 = temp;

    cout << "Now , where (1, 2, 3) is the aces of spade";
    cin >> position;

    switch (position) 
    {
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break; 

    }

    if (chosen.number == prize.number && chosen.suit == prize.suit)  //compare the cards
        cout << "That's right!, you win!\n";
    else 
        cout << "sorry you loose\n";
    
    return 0;


}