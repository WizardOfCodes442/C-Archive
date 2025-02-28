//circle.cpp
// circles as graphic object

#include "msoftcon.h"  // for graphic function
////////////////////////////////////////////////
struct circle                               //graphics circle
{
    int xCo, yCo;                          // coordinate of center
    int radius;
    color fillcolor;                      // color
    fstyle fillstyle;                    // fill style
};
/////////////////////////////////////////////
void circ_draw(circle c)
{
    set_color(c.fillcolor);                //setcolor
    set_fill_style(c.fillstyle);          // set fill pattern
    draw_circle(c.xCo, c.yCo, c.radius);  // draw solid circle
}

// ----------------------------------------------------------
int main()
{
    init_graphics();                        // initialize graphics system
                                            //create circles

    circle c1 = {15, 7, 5, cBLUE, X_FILL};
    circle c2 = {41, 12, 7, cRED,   O_FILL};
    circle c3 = {65, 18, 4, cGREEN, MEDIUM_FILL};

    circ_draw(c1);                      //draw circles
    circ_draw(c2);
    circ_draw(c3);
    set_cursor_pos(1, 25);                // cursor to the lower left
    return 0;
}