#ifndef __SHAPE_H
#define __SHAPE_H
#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#include <stdint.h>

typedef struct _Shape Shape;
typedef struct _Shape {
    double      (*GetArea)(Shape* self);
    void        (*Free)(Shape* self);
} Shape;

/**
 * @brief Rectangle Constructor
 * 
 * @param width 
 * @param height 
 * @return Rectangle* 
 */
Shape* new_Rectangle(uint32_t width, uint32_t height);

/**
 * @brief Circle Constructor
 * 
 * @param radius 
 * @return Shape* 
 */
Shape* new_Circle(uint32_t radius);

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __SHAPE_H */