#include <stdlib.h>

#include "Square.h"

/**
 * @brief Square Constructor
 * 
 * @param width 
 * @return Square* 
 */
Square* new_Square(uint32_t width) {
    Square* pSquare = (Square*)calloc(sizeof(Square), 1);
    if (pSquare) {
        inherit_Rectangle((Rectangle*)pSquare, width, width);
    }
    return pSquare;
}