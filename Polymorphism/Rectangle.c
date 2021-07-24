#include <stdlib.h>

#include "Rectangle.h"

static double   GetArea(Shape* interface);
static void     Free(Shape* interface);

/**
 * @brief Rectangle Constructor
 * 
 * @param width 
 * @param height 
 * @return Rectangle* 
 */
Shape* new_Rectangle(uint32_t width, uint32_t height) {
    Rectangle* pRectangle = (Rectangle*)calloc(sizeof(Rectangle), 1);
    if (pRectangle) {
        inherit_Rectangle(pRectangle, width, height);
    }
    return (Shape*)pRectangle;
}

/**
 * @brief Inherit Rectangle
 * 
 * @param child 
 * @param width 
 * @param height 
 */
void inherit_Rectangle(Rectangle* child, uint32_t width, uint32_t height) {
    if (child) {
        child->GetArea = GetArea;
        child->Free = Free;
        child->width = width;
        child->height = height;
    }
}

/**
 * @brief Get the Rectangle Area
 * 
 * @return uint32_t area
 */
double GetArea(Shape* interface) {
    Rectangle* self = (Rectangle*)interface;
    return self->width * self->height;
}

/**
 * @brief Free the Rectangle Object
 * 
 * @param self 
 */
void Free(Shape* interface) {
    Rectangle* self = (Rectangle*)interface;
    if (self) free(self);
    return;
}