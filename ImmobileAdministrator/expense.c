//
// Created by Hodosi on 3/5/2021.
//

#include "domain.h"
#include <string.h>

Block setWaterExpense(Block block, int number_of_apartment, float cost){
    Expense new_expense;

    new_expense.number_of_apartment = number_of_apartment;
    new_expense.cost = cost;
    strcpy(new_expense.type, "water");

    block.apartments[number_of_apartment].expenses[0] = new_expense;

    return block;
}

Block setSewerExpense(Block block, int number_of_apartment, float cost){
    Expense new_expense;

    new_expense.number_of_apartment = number_of_apartment;
    new_expense.cost = cost;
    strcpy(new_expense.type, "sewer");

    block.apartments[number_of_apartment].expenses[1] = new_expense;

    return block;
}

Block setHeatingExpense(Block block, int number_of_apartment, float cost){
    Expense new_expense;

    new_expense.number_of_apartment = number_of_apartment;
    new_expense.cost = cost;
    strcpy(new_expense.type, "heating");

    block.apartments[number_of_apartment].expenses[2] = new_expense;

    return block;
}

Block setGasExpense(Block block, int number_of_apartment, float cost){
    Expense new_expense;

    new_expense.number_of_apartment = number_of_apartment;
    new_expense.cost = cost;
    strcpy(new_expense.type, "gas");

    block.apartments[number_of_apartment].expenses[3] = new_expense;

    return block;
}

Expense getExpense(Apartment apartment, int number_of_expense){
    return apartment.expenses[number_of_expense];
}

int getNumberOfExpenses(Apartment apartment){
    return apartment.number_of_expenses;
}

float getCost(Expense expense){
    return expense.cost;
}

void getType(Expense expense, char type[]){
    strcpy(type, expense.type);
}