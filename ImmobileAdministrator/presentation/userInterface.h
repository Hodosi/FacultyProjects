//
// Created by Hodosi on 3/5/2021.
//

#ifndef IMMOBILEADMINISTRATOR_USERINTERFACE_H
#define IMMOBILEADMINISTRATOR_USERINTERFACE_H

#include "../business/service.h"

typedef struct {
    ServiceImmobile *service_immobile;
}UserInterfaceImmobile;

UserInterfaceImmobile* createUserInterface(ServiceImmobile*);

void destroyUserInterface(UserInterfaceImmobile*);

void runUserInterface(UserInterfaceImmobile*);

#endif //IMMOBILEADMINISTRATOR_USERINTERFACE_H
