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

DynamicVector* createDynamicVector();

void destroyDynamicVector(DynamicVector*);

void add(DynamicVector*, Element);


#endif //IMMOBILEADMINISTRATOR_DYNAMICVECTOR_H
