//CharacterCount.cpp
// counts charcaters and words typed in

#include <iostream>
#include <conio.h>  //for getche()

int main()
{
    int chcount = 0;
    int wdcount = 1; //space between two words
    char ch;

    while ( (ch=getche()) != '\r') {
        //loop until Enter typed
        if (ch == ' ') //if it's a space
            wdcount++;
        else //otherwise count a character
            chcount++;
    }
    cout<< "\nWords= " << wdcount <<  endl
        << "Letters= " << chcount << endl;
    
    return 0;


}
