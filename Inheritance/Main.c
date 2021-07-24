#include <stdio.h>

#include "Rectangle.h"
#include "Square.h"

int main(int argc, char* args[]) {
    Rectangle* rect = new_Rectangle(10, 12);
    Square* square = new_Square(10);
    printf("Rectangle Area: %d\n", rect->GetArea(rect));
    printf("Square Area: %d\n", square->GetArea(square));
    rect->Free(rect);
    square->Free(square);
    return 0;
}