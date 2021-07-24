#include <stdlib.h>

#include "Circle.h"

static double   GetArea(Shape* interface);
static void     Free(Shape* interface);

/**
 * @brief Circle Constructor
 * 
 * @param radius 
 * @return Shape* 
 */
Shape* new_Circle(uint32_t radius) {
    Circle* pCircle = (Circle*)calloc(sizeof(Circle), 1);
    if (pCircle) {
        inherit_Circle(pCircle, radius);
    }
    return (Shape*)pCircle;
}

/**
 * @brief Inherit Circle
 * 
 * @param child 
 * @param radius 
 */
void inherit_Circle(Circle* child, uint32_t radius) {
    if (child) {
        child->GetArea = GetArea;
        child->Free = Free;
        child->radius = radius;
    }
}

/**
 * @brief Get the Circle Area
 * 
 * @return uint32_t area
 */
double GetArea(Shape* interface) {
    Circle* self = (Circle*)interface;
    return (double)self->radius * 3.14;
}

/**
 * @brief Free the Rectangle Object
 * 
 * @param self 
 */
void Free(Shape* interface) {
    Circle* self = (Circle*)interface;
    if (self) free(self);
    return;
}