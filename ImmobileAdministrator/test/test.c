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
#include <math.h>

void runDomainTests(){
    printf("Start of domain tests...\n");

    //expense tests
    int number_of_apartment = 1;
    double cost = 4.5;
    char type[256] = "water";
    char test_type[256];

    //create test
    Expense* expense = createExpense(number_of_apartment, cost, type);

    assert(getApartmentNumberOfExpense(expense) == number_of_apartment);
    assert(getCost(expense) == cost);
    getType(expense, test_type);
    assert(strcmp(test_type, type) == 0);

    //destroy test
    destroyExpense(expense);

    //apartment tests
    //create test
    Apartment* apartment = createApartment(number_of_apartment);

    //test number of apartment
    assert(getApartmentNumber(apartment) == number_of_apartment);

    //test number of expenses and cost
    double new_cost = 8.9;
    for(int i = 0; i < apartment -> number_of_expenses; i++){
        assert(getApartmentNumberOfExpense(apartment -> expenses[i]) == number_of_apartment);
        assert(getCost(apartment -> expenses[i]) == 0);
        setCost(apartment -> expenses[i], new_cost);
        assert(getCost(apartment -> expenses[i]) == new_cost);
    }
    //test get cost by type
    cost = getCostByType(apartment, type);
    assert(fabs(cost - new_cost) < 0.01);


    //test set cost by type
    cost = 6.7;
    setCostByType(apartment, type, cost);
    new_cost = getCostByType(apartment, type);
    assert(fabs(cost - new_cost) < 0.01);

    //test type
    getType(apartment -> expenses[0], type);
    assert(strcmp(type, "water") == 0);

    getType(apartment -> expenses[1], type);
    assert(strcmp(type, "sewer") == 0);

    getType(apartment -> expenses[2], type);
    assert(strcmp(type, "heating") == 0);

    getType(apartment -> expenses[3], type);
    assert(strcmp(type, "gas") == 0);

    //destroy test
    destroyApartment(apartment);

    printf("End of domain tests...\n");
}

void runRepositoryTests(){
    printf("Start of repository tests...\n");

    int number_of_apartment = 0;
    Apartment* apartment = createApartment(number_of_apartment);

    //create test
    RepositoryImmobile* repository = createRepository();

    assert(getRepositorySize(repository) == 0);

    addApartment(repository, apartment);

    assert(getRepositorySize(repository) == 1);

    //get all apartments test
    //DynamicVector *vector = getAllApartments(repository);
    DynamicStaticVector *vector = getAllApartments(repository);

    assert(getApartmentNumber(vector->items[0]) == number_of_apartment);

    //get apartment test
    Apartment* new_apartment = getApartmentByNumber(repository, number_of_apartment);
    assert(getApartmentNumber(new_apartment) == number_of_apartment);

    //destroy test
    destroyRepository(repository);

    printf("End of repository tests...\n");
}


void runServiceTests(){
    printf("Start of service tests...\n");

    RepositoryImmobile* repository = createRepository();

    //create test
    ServiceImmobile* service = createService(repository);

    int number_of_apartments = 2;

    //////////////////////////////////////////////////////////////
    //generate apartments test
    generateApartments(service, number_of_apartments);

    //get all apartments test
    //DynamicVector *vector = getAllApartments(repository);
    DynamicStaticVector* vector = getApartments(service);

    assert(getApartmentNumber(vector->items[0]) == 0);
    assert(getApartmentNumber(vector->items[1]) == 1);

    /////////////////////////////////////////////////////////////////////////
    //add expense test with valid input
    int number_of_apartment = 1;
    double cost = 4.5;
    double cost_before, cost_after, new_cost;
    char new_type[256], type[256] = "gas";

    Apartment* apartment = getApartmentByNumber(repository, number_of_apartment);
    cost_before = getCostByType(apartment, type);
    addExpense(service, number_of_apartment, cost, type);
    cost_after = getCostByType(apartment, type);

    new_cost = cost_before + cost;
    assert(fabs(new_cost - cost_after) < 0.001);

    //add expense test with invalid input
    //invalid number
    number_of_apartment = -1;
    cost = 4.5;
    strcpy(type, "water");
    assert(addExpense(service, number_of_apartment, cost, type) != 0);

    number_of_apartment = 2;
    cost = 4.5;
    strcpy(type, "water");
    assert(addExpense(service, number_of_apartment, cost, type) != 0);

    //invalid type
    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "");
    assert(addExpense(service, number_of_apartment, cost, type) != 0);

    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "yes sir");
    assert(addExpense(service, number_of_apartment, cost, type) != 0);

    //valid type and number
    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "water");
    assert(addExpense(service, number_of_apartment, cost, type) == 0);

    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "sewer");
    assert(addExpense(service, number_of_apartment, cost, type) == 0);

    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "heating");
    assert(addExpense(service, number_of_apartment, cost, type) == 0);

    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "gas");
    assert(addExpense(service, number_of_apartment, cost, type) == 0);

    /////////////////////////////////////////////////////////////////
    //modify expense


    cost = 7.53;
    modifyExpense(service, number_of_apartment, cost, type);
    cost_after = getCostByType(apartment, type);

    assert(fabs(cost - cost_after) < 0.001);

    //add expense test with invalid input
    //invalid number
    number_of_apartment = -1;
    cost = 4.5;
    strcpy(type, "water");
    assert(modifyExpense(service, number_of_apartment, cost, type) != 0);

    number_of_apartment = 2;
    cost = 4.5;
    strcpy(type, "water");
    assert(modifyExpense(service, number_of_apartment, cost, type) != 0);

    //invalid type
    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "");
    assert(modifyExpense(service, number_of_apartment, cost, type) != 0);

    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "yes sir");
    assert(modifyExpense(service, number_of_apartment, cost, type) != 0);

    //valid type and number
    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "water");
    assert(modifyExpense(service, number_of_apartment, cost, type) == 0);

    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "sewer");
    assert(modifyExpense(service, number_of_apartment, cost, type) == 0);

    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "heating");
    assert(modifyExpense(service, number_of_apartment, cost, type) == 0);

    number_of_apartment = 1;
    cost = 4.5;
    strcpy(type, "gas");
    assert(modifyExpense(service, number_of_apartment, cost, type) == 0);


    destroyService(service);

    printf("End of repository tests...\n");
}

void runAllTests(){
    runDomainTests();
    runRepositoryTests();
    runServiceTests();
}
