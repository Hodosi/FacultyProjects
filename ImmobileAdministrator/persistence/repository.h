//
// Created by Hodosi on 3/5/2021.
//

#ifndef IMMOBILEADMINISTRATOR_REPOSITORY_H
#define IMMOBILEADMINISTRATOR_REPOSITORY_H

#include "../domain/valueObject.h"
#include "dynamicVector.h"
#include "dynamicStaticVector.h"

typedef struct {
    //DynamicVector* dynamic_vector;
    DynamicStaticVector* dynamic_vector;
}RepositoryImmobile;

RepositoryImmobile* createRepository();

void destroyRepository(RepositoryImmobile*);

void addApartment(RepositoryImmobile*, Apartment*);

Element getAllApartments(RepositoryImmobile*);

int getRepositorySize(RepositoryImmobile* repository);

#endif //IMMOBILEADMINISTRATOR_REPOSITORY_H
