//
// Created by Hodosi on 3/5/2021.
//

#ifndef IMMOBILEADMINISTRATOR_SERVICE_H
#define IMMOBILEADMINISTRATOR_SERVICE_H

#include "../domain/valueObject.h"

#include "../persistence/repository.h"

typedef struct{
    RepositoryImmobile* repository_immobile;
}ServiceImmobile;

ServiceImmobile* createService(RepositoryImmobile*);

void destroyService(ServiceImmobile*);

int generateApartments(ServiceImmobile*, int);

Element getApartments(ServiceImmobile*);


#endif //IMMOBILEADMINISTRATOR_SERVICE_H
