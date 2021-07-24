#ifndef __RECTANGLE_H
#define __RECTANGLE_H
#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#include <stdint.h>

#include "Shape.h"

typedef struct _Rectangle Rectangle;
#pragma anon_unions
typedef struct _Rectangle {
    struct _Shape;
    uint32_t    width;
    uint32_t    height;
} Rectangle;

/**
 * @brief 
 * 
 * @param child 
 * @param width 
 * @param height 
 */
void inherit_Rectangle(Rectangle* child, uint32_t width, uint32_t height);

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __RECTANGLE_H */