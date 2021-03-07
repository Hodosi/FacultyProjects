//
// Created by Hodosi on 3/5/2021.
//

#include "service.h"
#include <stdlib.h>

#include "../persistence/repository.h"
#include "../validation/validator.h"
#include "../domain/valueObject.h"


ServiceImmobile* createService(RepositoryImmobile* repository_immobile){
    ServiceImmobile* service = (ServiceImmobile*)malloc(sizeof(ServiceImmobile));

    service -> repository_immobile = repository_immobile;

    return service;
}

void destroyService(ServiceImmobile* service_immobile){
    destroyRepository(service_immobile -> repository_immobile);
    free(service_immobile);
}

int generateApartments(ServiceImmobile* service, int number_of_apartments){
    Apartment* apartment;
    for(int number_of_apartment = 0; number_of_apartment < number_of_apartments; number_of_apartment++){
        apartment = createApartment(number_of_apartment);
        addApartment(service -> repository_immobile, apartment);
    }
}

Element getApartments(ServiceImmobile* service){
    return getAllApartments(service -> repository_immobile);
}