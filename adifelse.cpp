// adifelse.cpp
// demonstrates If... Else with adventure game

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char dir = 'a';
    int x= 10, y= 10;

    cout <<"Type Enter to quit\n";
    while ( dir != '\r') { //until enter key is typed
        cout << "\nYour location is " << x << ", " << y;
        cout << "\nPress direction key (n, s, e, w): ";

        dir = getche();   //get character
        if (dir == 'n')   //go north
            y--;
        else
            if (dir == 's') // go south
                y++;
            else
                if (dir == 'e')    //go east
                    x++;
                else
                    if (dir == 'w') // go west
                        x--;
    }
    return 0;
}