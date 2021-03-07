//
// Created by Hodosi on 3/5/2021.
//

#include "repository.h"
#include <stdlib.h>

RepositoryImmobile* createRepository(){
    DynamicVector* dynamic_vector = createDynamicVector();

    RepositoryImmobile* repository = malloc(sizeof(RepositoryImmobile));
    repository -> dynamic_vector = dynamic_vector;

    return repository;
}

void destroyRepository(RepositoryImmobile* repository){
    DynamicVector* vector = repository -> dynamic_vector;
    for(int i =0; i < vector ->length; i++){
        destroyApartment(vector -> items[i]);
    }
    destroyDynamicVector(repository -> dynamic_vector);
    free(repository);
}

void addApartment(RepositoryImmobile* repository, Apartment* apartment){
    add(repository -> dynamic_vector, apartment);
}

Element getAllApartments(RepositoryImmobile* repository){
    return repository -> dynamic_vector;
}

