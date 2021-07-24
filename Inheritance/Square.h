#ifndef __SQUARE_H
#define __SQUARE_H
#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#include <stdint.h>

#include "Rectangle.h"

typedef struct _Square Square;
#pragma anon_unions
typedef struct _Square {
    struct _Rectangle;
} Square;

/**
 * @brief Square Constructor
 * 
 * @param width 
 * @return Square* 
 */
Square* new_Square(uint32_t width);

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __SQUARE_H */