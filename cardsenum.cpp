//cardsenum.cpp
// demonstrates enumerations
#include <iostream>
using namespace std;

const int jack = 11;
const int queen = 12;
const int king  = 13;
const int ace = 14;

enum Suit {clubs, diamonds, hearts, spades};
//////////////////////////////////////////
struct card
{
    int number;      //2 to 10, jack, queen, king, ace
    Suit suit;        //clubs, diamonds, hearts, spades
};

/////////////////////////////////////////////
int main()
{
    card temp, chosen, price;               //define cards
    int position;

    card card1 = {7, clubs};              //initialize card1
    cout << "Card1 is the seven of clubs\n";

    card card2 = {jack, hearts};         //initialize card2
    cout << "Card 2 is the jack of hearts\n";

    card  card3 = {ace, spades};          // initialize card3
    cout << "Card 3 is the ace of spades\n ";

    prize = card3;                         //copy this card to remember it

    cout << "I'm swapping card1 and card3\n";
    temp = card3; card3 = card1; card1 = temp;

    cout << "I'm swapping card 2 and  card 3 \n";
    temp = card3; card3 = card2; card2 = temp;

    cout << "I'm swapping card2 and card1\n";
    temp = card2;  card2 = card1; card1 = temp;

    cout << "Now , where (1, 2, or 3) is the ace of spades?";
    cin >> position;

    switch (position)
    {
        case 1:  chosen = card1; break;
        case 2: chosen = card2; break; 
        case 3: chosen = card3; break;
    }

    if (chosen.number == prize.number && chosen.suit == price.suit)
        cout << "That's right! You win! \n";
    else 
        cout << "Sorry you lose\n";
        return 0;q
                                        
}