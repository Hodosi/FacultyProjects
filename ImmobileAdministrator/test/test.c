//
// Created by Hodosi on 3/5/2021.
//

#include "test.h"

#include "../business/service.h"
#include "../persistence/repository.h"
#include "../domain/valueObject.h"

#include <stdio.h>
#include <assert.h>
#include <string.h>

void runDomainTests(){
    printf("Start of domain tests...\n");

    //expense tests
    int number_of_apartment = 1;
    double cost = 4.5;
    char type[256] = "water";
    char test_type[256];

    Expense* expense = createExpense(number_of_apartment, cost, type);

    assert(getApartmentNumberOfExpense(expense) == number_of_apartment);
    assert(getCost(expense) == cost);
    getType(expense, test_type);
    assert(strcmp(test_type, type) == 0);

    destroyExpense(expense);

    //apartment tests
    Apartment* apartment = createApartment(number_of_apartment);

    assert(getApartmentNumber(apartment) == number_of_apartment);

    for(int i = 0; i < 4; i++){
        assert(getApartmentNumberOfExpense(apartment -> expenses[i]) == number_of_apartment);
        assert(getCost(apartment -> expenses[i]) == 0);

    }
    getType(apartment -> expenses[0], type);
    assert(strcmp(type, "water") == 0);

    getType(apartment -> expenses[1], type);
    assert(strcmp(type, "sewer") == 0);

    getType(apartment -> expenses[2], type);
    assert(strcmp(type, "heating") == 0);

    getType(apartment -> expenses[3], type);
    assert(strcmp(type, "gas") == 0);

    destroyApartment(apartment);

    printf("End of domain tests...\n");
}

void runRepositoryTests(){
    printf("Start of repository tests...\n");

    int number_of_apartment = 1;
    Apartment* apartment = createApartment(number_of_apartment);

    RepositoryImmobile* repository = createRepository();

    assert(getRepositorySize(repository) == 0);

    addApartment(repository, apartment);

    assert(getRepositorySize(repository) == 1);

    //DynamicVector *vector = getAllApartments(repository);
    DynamicStaticVector *vector = getAllApartments(repository);

    assert(getApartmentNumber(vector->items[0]) == number_of_apartment);

    destroyRepository(repository);

    printf("End of repository tests...\n");
}

void runServiceTests(){
    printf("Start of service tests...\n");

    RepositoryImmobile* repository = createRepository();

    ServiceImmobile* service = createService(repository);

    int number_of_apartments = 2;
    generateApartments(service, number_of_apartments);

    //DynamicVector *vector = getAllApartments(repository);
    DynamicStaticVector *vector = getApartments(service);

    assert(getApartmentNumber(vector->items[0]) == 0);
    assert(getApartmentNumber(vector->items[1]) == 1);

    destroyService(service);

    printf("End of repository tests...\n");
}

void runAllTests(){
    runDomainTests();
    runRepositoryTests();
    runServiceTests();
}
