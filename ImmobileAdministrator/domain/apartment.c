//
// Created by Hodosi on 3/5/2021.
//

#include "valueObject.h"
#include <stdlib.h>

Apartment* createApartment(int number_of_apartment){
    Apartment* apartment = (Apartment*)malloc(sizeof(Apartment));

    apartment -> number_of_apartment = number_of_apartment;
    apartment -> number_of_expenses = 4;
    apartment -> expenses = (Expense**)malloc(sizeof(Expense*) * 4);

    Expense* expense; //water, sewer, heating, gas

    char type_water[] = "water";
    expense = createExpense(number_of_apartment, 0, type_water);
    apartment -> expenses[0] = expense;

    char type_sewer[] = "sewer";
    expense = createExpense(number_of_apartment, 0, type_sewer);
    apartment -> expenses[1] = expense;

    char type_heating[] = "heating";
    expense = createExpense(number_of_apartment, 0, type_heating);
    apartment -> expenses[2] = expense;

    char type_gas[] = "heating";
    expense = createExpense(number_of_apartment, 0, type_gas);
    apartment -> expenses[3] = expense;

    return apartment;
}

void destroyApartment(Apartment* apartment){
    for(int i = 0; i < apartment -> number_of_expenses; i++){
        destroyExpense(apartment -> expenses[i]);
    }
    free(apartment -> expenses);
    free(apartment);
}

int getApartmentNumber(Apartment *apartment){
    return apartment -> number_of_apartment;
}
