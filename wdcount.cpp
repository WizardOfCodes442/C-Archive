//wdcount.cpp
//demonstrates enums, counts word in phrase

#include <iostream>
#include <conio.h> // for getche()
using namespace std;

enum itsaWord { NO, YES};    // NO=0, YES = 1

int main()
{
    itsaWord isWord = NO; // Yes when in word, NO when in whitespace
    char  ch = 'a'; // character read from keyboard
    int wordcount = 0;  // number of words read

    cout << "Enter a phrase:\n";
    do {
        ch = getche();          // get character
        if (ch == ' ' || ch == '\r')  // if whitespace
        {
            if (isWord == YES) // and doing word,
            {                   //then it's end of the word
                wordcount++; // count the word
                isWord = NO; //reset the flag

            }
        }                       // otherwise it's normal character 
        else {
            if (isWord == NO)   // if start of word,
                isWord = YES;   // the set flag
        } 
    } while (ch != '\r');      // quit on enter key 
    cout << "\n--- Word count is " << wordcount << "---\n";
    return 0;
}
