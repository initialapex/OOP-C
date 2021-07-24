#include <stdio.h>

#include "Rectangle.h"

int main(int argc, char* args[]) {
    Rectangle* rect = new_Rectangle(10, 12);
    printf("Rectangle Area: %d\n", rect->GetArea(rect));
    rect->Free(rect);
    return 0;
}