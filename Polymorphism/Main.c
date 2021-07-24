#include <stdio.h>

// Only need to provide Shape.h, if it would be build to library.
#include "Shape.h"

int main(int argc, char* args[]) {
    Shape* rect = new_Rectangle(10, 12);
    Shape* circle = new_Circle(10);
    printf("Rectangle Area: %f\n", rect->GetArea(rect));
    printf("Circle Area: %f\n", circle->GetArea(circle));
    rect->Free(rect);
    circle->Free(circle);
    return 0;
}