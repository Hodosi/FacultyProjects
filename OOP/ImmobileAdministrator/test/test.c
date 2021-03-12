//
// Created by Hodosi on 3/5/2021.
//

#include "test.h"

#include "../business/service.h"

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
    Expense *expense = createExpense(number_of_apartment, cost, type);

    assert(getApartmentNumberOfExpense(expense) == number_of_apartment);
    assert(getCost(expense) == cost);
    getType(expense, test_type);
    assert(strcmp(test_type, type) == 0);

    //destroy test
    destroyExpense(expense);

    //apartment tests
    //create test
    Apartment *apartment = createApartment(number_of_apartment);

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
    Apartment *apartment = createApartment(number_of_apartment);

    //create test
    RepositoryImmobile* repository = createRepository();

    assert(getRepositorySize(repository) == 0);

    addApartment(repository, apartment);

    assert(getRepositorySize(repository) == 1);

    //get all apartments test
    DynamicVector *vector = getAllApartments(repository);
    //DynamicStaticVector *vector = getAllApartments(repository);

    assert(getApartmentNumber(vector->items[0]) == number_of_apartment);

    //get apartment test
    Apartment *new_apartment = getApartmentByNumber(repository, number_of_apartment);
    assert(getApartmentNumber(new_apartment) == number_of_apartment);

    //destroy test
    destroyRepository(repository);

    printf("End of repository tests...\n");
}


void runServiceCrudTests(){
    printf("Start of service tests...\n");

    RepositoryImmobile* repository = createRepository();

    //create test
    ServiceImmobile* service = createService(repository);

    int number_of_apartments = 2;

    //////////////////////////////////////////////////////////////
    //generate apartments test
    generateApartments(service, number_of_apartments);

    //get all apartments test
    DynamicVector *vector = getAllApartments(repository);
    //DynamicStaticVector* vector = getApartments(service);

    assert(getApartmentNumber(vector->items[0]) == 0);
    assert(getApartmentNumber(vector->items[1]) == 1);

    /////////////////////////////////////////////////////////////////////////
    //add expense test with valid input
    int number_of_apartment = 1;
    double cost = 4.5;
    double cost_before, cost_after, new_cost;
    char type[256] = "gas";

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


    /////////////////////////////////////////////////////////////////
    //delete expense
    deleteExpense(service, number_of_apartment, type);
    cost_after = getCostByType(apartment, type);

    assert(fabs(0.0 - cost_after) < 0.001);

    //add expense test with invalid input
    //invalid number
    number_of_apartment = -1;
    strcpy(type, "water");
    assert(deleteExpense(service, number_of_apartment, type) != 0);

    number_of_apartment = 2;
    strcpy(type, "water");
    assert(deleteExpense(service, number_of_apartment, type) != 0);

    //invalid type
    number_of_apartment = 1;
    strcpy(type, "");
    assert(deleteExpense(service, number_of_apartment, type) != 0);

    number_of_apartment = 1;
    strcpy(type, "yes sir");
    assert(deleteExpense(service, number_of_apartment, type) != 0);

    //valid type and number
    number_of_apartment = 1;
    strcpy(type, "water");
    assert(deleteExpense(service, number_of_apartment, type) == 0);

    number_of_apartment = 1;
    strcpy(type, "sewer");
    assert(deleteExpense(service, number_of_apartment, type) == 0);

    number_of_apartment = 1;
    strcpy(type, "heating");
    assert(deleteExpense(service, number_of_apartment, type) == 0);

    number_of_apartment = 1;
    strcpy(type, "gas");
    assert(deleteExpense(service, number_of_apartment, type) == 0);

    destroyService(service);

    printf("End of service tests...\n");
}

void runServiceFiltrationAndSortingTests(){
    printf("Start of service tests...\n");
    RepositoryImmobile* repository_filtration = createRepository();
    ServiceImmobile* service_filtration = createService(repository_filtration);

    int number_of_apartments, number_of_apartment;
    double cost;
    char type[256];
    number_of_apartments = 4;
    generateApartments(service_filtration, number_of_apartments);

    number_of_apartment = 0;
    cost = 4.5;
    strcpy(type, "gas");
    addExpense(service_filtration, number_of_apartment, cost, type);

    number_of_apartment = 1;
    cost = 3.7;
    strcpy(type, "gas");
    addExpense(service_filtration, number_of_apartment, cost, type);

    number_of_apartment = 2;
    cost = 6.8;
    strcpy(type, "gas");
    addExpense(service_filtration, number_of_apartment, cost, type);

    number_of_apartment = 3;
    cost = 5.1;
    strcpy(type, "gas");
    addExpense(service_filtration, number_of_apartment, cost, type);

    double sum_min = 4.9;
    double sum_max = 7.8;

    Element items;
    items = filtrationBySumAndType(service_filtration, sum_min, sum_max, "war");
    assert(items == NULL);
    items = filtrationBySumAndType(service_filtration, 5, 2, "water");
    assert(items == NULL);

    items = filtrationBySumAndType(service_filtration, sum_min, sum_max, type);

    DynamicVector *vector_filtration = items;
    //DynamicStaticVector *vector_filtration = items;

    Apartment* apartment_filtration;

    apartment_filtration = vector_filtration -> items[0];

    double test_cost = getCostByType(apartment_filtration, "gas");
    cost = 6.8;
    assert(fabs(test_cost - cost) < 0.0001);

    apartment_filtration = vector_filtration -> items[1];

    test_cost = getCostByType(apartment_filtration, "gas");
    cost = 5.1;
    assert(fabs(test_cost - cost) < 0.0001);

    destroyDynamicVector(vector_filtration);
    //destroyDynamicStaticVector(vector_filtration);

    ///////////////////////////////////////
    items = sortingApartmentsBySum(service_filtration, "love");
    assert(items == NULL);

    items = sortingApartmentsBySum(service_filtration, "gas");

    DynamicVector *vector_sorting = items;
    //DynamicStaticVector *vector_sorting = items;

    Apartment* apartment_sorting;

    apartment_sorting = vector_sorting -> items[0];

    cost = 3.7;
    test_cost = getCostByType(apartment_sorting, "gas");
    assert(fabs(test_cost - cost) < 0.0001);

    apartment_sorting = vector_sorting-> items[3];

    cost = 6.8;
    test_cost = getCostByType(apartment_sorting, "gas");
    assert(fabs(test_cost - cost) < 0.0001);

    destroyDynamicVector(vector_sorting);
    //destroyDynamicStaticVector(vector_sorting);

    destroyService(service_filtration);
    printf("End of service tests...\n");
}

void runAllTests(){
    runDomainTests();
    runRepositoryTests();
    runServiceCrudTests();
    runServiceFiltrationAndSortingTests();
}