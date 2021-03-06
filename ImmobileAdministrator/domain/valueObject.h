//
// Created by Hodosi on 3/5/2021.
//

#ifndef IMMOBILEADMINISTRATOR_VALUEOBJECT_H
#define IMMOBILEADMINISTRATOR_VALUEOBJECT_H


typedef struct {
    int number_of_apartment;
    float cost;
    char type[10];    // (water, sewer, heating, gas)

} Expense;


typedef struct{
    int number;

    int number_of_expenses;
    Expense expenses[4];

} Apartment;


typedef struct {
    int number;

    int number_of_apartments;
    Apartment apartments[100];

} Block;

//Block
Block createBlock(int number_of_block);

//Apartment
Block createApartment(Block block, int number_of_apartment);

Apartment getApartment(Block block, int number_of_apartment);

int getNumberOfApartments(Block block);

Block setNumberOfApartments(Block block, int number_of_apartments);

//Expense
Block setWaterExpense(Block block, int number_of_apartment, float cost);

Block setSewerExpense(Block block, int number_of_apartment, float cost);

Block setHeatingExpense(Block block, int number_of_apartment, float cost);

Block setGasExpense(Block block, int number_of_apartment, float cost);

Expense getExpense(Apartment apartment, int number_of_expense);

int getNumberOfExpenses(Apartment apartment);

float getCost(Expense expense);

void getType(Expense expense, char type[]);


#endif //IMMOBILEADMINISTRATOR_VALUEOBJECT_H
