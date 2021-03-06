//
// Created by Hodosi on 3/6/2021.
//

#ifndef IMMOBILEADMINISTRATOR_DYNAMICVECTOR_H
#define IMMOBILEADMINISTRATOR_DYNAMICVECTOR_H

typedef void* Element;

typedef struct {
    Element* items;
    int length;
    int capacity;
} DynamicVector;

#endif //IMMOBILEADMINISTRATOR_DYNAMICVECTOR_H
