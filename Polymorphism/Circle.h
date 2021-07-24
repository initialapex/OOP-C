#ifndef __CIRCLE_H
#define __CIRCLE_H
#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#include <stdint.h>

#include "Shape.h"

typedef struct _Circle Circle;
#pragma anon_unions
typedef struct _Circle {
    struct _Shape;
    uint32_t    radius;
} Circle;

/**
 * @brief 
 * 
 * @param child 
 * @param radius 
 */
void inherit_Circle(Circle* child, uint32_t radius);

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __CIRCLE_H */