#ifndef __RECTANGLE_H
#define __RECTANGLE_H
#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#include <stdint.h>

typedef struct _Rectangle Rectangle;
typedef struct _Rectangle {
    uint32_t    (*GetArea)(Rectangle* self);
    void        (*Free)(Rectangle* self);
    uint32_t    width;
    uint32_t    height;
} Rectangle;

/**
 * @brief Rectangle Constructor
 * 
 * @param width 
 * @param height 
 * @return Rectangle* 
 */
Rectangle* new_Rectangle(uint32_t width, uint32_t height);

/**
 * @brief Inherit Rectangle
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