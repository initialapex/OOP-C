#include <stdlib.h>

#include "Rectangle.h"

static uint32_t GetArea(Rectangle* self);
static void     Free(Rectangle* self);

/**
 * @brief Rectangle Constructor
 * 
 * @param width 
 * @param height 
 * @return Rectangle* 
 */
Rectangle* new_Rectangle(uint32_t width, uint32_t height) {
    Rectangle* pRectangle = (Rectangle*)calloc(sizeof(Rectangle), 1);
    if (pRectangle) {
        pRectangle->GetArea = GetArea;
        pRectangle->Free = Free;
        pRectangle->width = width;
        pRectangle->height = height;
    }
    return pRectangle;
}

/**
 * @brief Get the Rectangle Area
 * 
 * @return uint32_t area
 */
uint32_t GetArea(Rectangle* self) {
    return self->width * self->height;
}

/**
 * @brief Free the Rectangle Object
 * 
 * @param self 
 */
void Free(Rectangle* self) {
    if (self) free(self);
    return;
}