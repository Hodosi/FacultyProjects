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

    int number_of_apartment = 1;
    double cost = 4.5;
    char type[] = "water";
    char test_type[256];

    Expense* expense = createExpense(number_of_apartment, cost, type);

    assert(getApartmentNumberOfExpense(expense) == number_of_apartment);
    assert(getCost(expense) == cost);
    getType(expense, test_type);
    assert(strcmp(test_type, type) == 0);

    destroyExpense(expense);

    Apartment* apartment = createApartment(number_of_apartment);

    assert(getApartmentNumber(apartment) == number_of_apartment);

    assert(apartment -> expenses[0] -> number_of_apartment == number_of_apartment);
    assert(apartment -> expenses[0] -> cost == 0);
    assert(apartment -> expenses[1] -> cost == 0);
    assert(apartment -> expenses[2] -> cost == 0);
    assert(apartment -> expenses[3] -> cost == 0);

    destroyApartment(apartment);

    printf("End of domain tests...\n");
}

void runAllTests(){
    runDomainTests();
}
