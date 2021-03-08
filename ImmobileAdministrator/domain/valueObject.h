//
// Created by Hodosi on 3/5/2021.
//

#ifndef IMMOBILEADMINISTRATOR_VALUEOBJECT_H
#define IMMOBILEADMINISTRATOR_VALUEOBJECT_H


typedef struct {
    int number_of_apartment;
    double cost;
    char *type;    // (water, sewer, heating, gas)

} Expense;


typedef struct{
    int number_of_apartment;

    int number_of_expenses;
    Expense **expenses;

} Apartment;

//expenses
Expense* createExpense(int number_of_apartment, double cost, char* type);

void destroyExpense(Expense* expense);

Expense* copyExpense(Expense* expense);

int getApartmentNumberOfExpense(Expense* expense);

double getCost(Expense* expense);

void setCost(Expense* expense, double new_cost);

void getType(Expense* expense, char* type);

//apartments
Apartment* createApartment(int number_of_apartment);

void destroyApartment(Apartment* apartment);

int getApartmentNumber(Apartment *apartment);

double getCostByType(Apartment* apartment, char* type);

void setCostByType(Apartment* apartment, char* type, double new_cost);

Apartment* copyApartment(Apartment* apartment);

#endif //IMMOBILEADMINISTRATOR_VALUEOBJECT_H
